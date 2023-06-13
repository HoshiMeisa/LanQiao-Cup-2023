#I
# Read the number of nodes and the number of operations.
n, m = map(int, input().split())

# Initialize the array of weights.
weights = list(map(int, input().split()))

# Initialize the adjacency list.
adj = [[] for _ in range(n)]

# Read the edges.
for i in range(n - 1):
    u, v = map(int, input().split())
    adj[u - 1].append(v - 1)
    adj[v - 1].append(u - 1)

# Initialize the xor sum of the weights of each subtree.
subtree_xor_sums = [0] * n

# Recursively compute the xor sum of the weights of each subtree.
def dfs(node, parent):
    # Initialize the xor sum of the weights of the subtree rooted at node.
    subtree_xor_sum = weights[node]

    # For each child of node, add its xor sum to the xor sum of the subtree rooted at node.
    for child in adj[node]:
        if child != parent:
            subtree_xor_sum ^= subtree_xor_sums[child]

    # Update the xor sum of the weights of each subtree.
    subtree_xor_sums[node] = subtree_xor_sum

    # Recursively compute the xor sum of the weights of each subtree rooted at node's children.
    for child in adj[node]:
        if child != parent:
            dfs(child, node)

# Iterate through the operations.
for _ in range(m):
    # Read the operation.
    op, node = map(int, input().split())

    # If the operation is type 1, update the weight of node.
    if op == 1:
        weights[node - 1] = node

    # If the operation is type 2, print the xor sum of the weights of the subtree rooted at node.
    else:
        print(subtree_xor_sums[node - 1])
