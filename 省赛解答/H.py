#H
import heapq
from collections import defaultdict

def dijkstra(graph, start):
    distances = {start: 0}
    visited = set()
    pq = [(0, start)]

    while pq:
        cur_distance, cur_node = heapq.heappop(pq)
        if cur_node in visited:
            continue
        visited.add(cur_node)

        for neighbor, weight in graph[cur_node]:
            distance = cur_distance + weight
            if neighbor not in distances or distance < distances[neighbor]:
                distances[neighbor] = distance
                heapq.heappush(pq, (distance, neighbor))

    return distances

def min_edge_removal(n, edges):
    graph = defaultdict(list)
    for u, v, c in edges:
        graph[u].append((v, c))
        graph[v].append((u, c))

    distances = dijkstra(graph, 1)

    results = []
    for i in range(1, n + 1):
        if i not in distances:
            results.append(-1)
            continue

        count = 0
        for v, c in graph[i]:
            if distances[v] + c == distances[i]:
                count += 1
        results.append(count - 1)

    return results

if __name__ == "__main__":
    n, m = map(int, input().split())
    edges = [tuple(map(int, input().split())) for _ in range(m)]

    results = min_edge_removal(n, edges)

    for result in results:
        print(result)
