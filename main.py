from collections import deque  # 使用deque的好处在于，可以直接往左边插入节点


class Node:
    def __init__(self, value=0, next=None):
        self.value = value
        self.next = next


class LinkedList:
    def __init__(self):
        self.head = Node()
        self.nodes = deque([])

    def insert_head(self, x):
        """
        插入头节点之前，会有下面三种情况
        0 -> 0 ->   self.head.next is not None
        0 -> N      else
        插入节点之后
        n -> 0 ->
        n -> N
        """
        if self.head.next is not None:
            node = Node(x, self.head)
        else:
            node = Node(x, None)

        self.head = node
        self.nodes.appendleft(node)

    def insert_after(self, k, x):
        if k <= 0 or k > len(self.nodes):
            return "Invalid position"
        else:
            prev = self.nodes[k - 1]
            node = Node(x, prev.next)
            prev.next = node
            self.nodes.insert(k, node)

    def delete_after(self, k):
        if k < 0 or k >= len(self.nodes):
            return "Invalid position"
        else:
            if k == 0:
                node = self.head
            else:
                node = self.nodes[k - 1]
            node.next = node.next.next
            self.nodes = deque(list(self.nodes)[:k])

    def print_linked_list(self):
        node = self.head.next
        while node:
            print(node.value, end=' ')
            node = node.next
        print()


def main():
    M = int(input())
    linked_list = LinkedList()

    for _ in range(M):
        operation = input().split()

        if operation[0] == 'H':
            linked_list.insert_head(int(operation[1]))

        elif operation[0] == 'D':
            linked_list.delete_after(int(operation[1]))

        elif operation[0] == 'I':
            linked_list.insert_after(int(operation[1]), int(operation[2]))

    linked_list.print_linked_list()


if __name__ == "__main__":
    main()