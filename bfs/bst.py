class Node:
    def __init__(self, key, value, left, right):
        self.key = key
        self.value = value
        self.left = left
        self.right = right


class BinarySearchTree:
    def __init__(self) -> None:
        self.root = None  # 루트 설정

    def search(self, key) -> int:
        node = self.root  # 루트
        while True:
            if node is None:
                return -1
            if key == node.key:
                return node.value
            elif key < node.key:
                node = node.left
            else:
                node = node.right

    def add(self, key, value) -> bool:
        def add_node(node, key, value) -> None:
            if key == node.key:
                return False
            elif key < node.key:
                if node.left is None:
                    node.left = Node(key, value, None, None)
                else:
                    add_node(node.left, key, value)
            else:
                if node.right is None:
                    node.right = Node(key, value, None, None)
                else:
                    add_node(node.right, key, value)
            return True

        if self.root is None:
            self.root = Node(key, value, None, None)
            return True
        else:
            return add_node(self.root, key, value)

    def remove(self, key) -> bool:
        node = self.root
        parent = None
        is_left_child = True
        while True:
            if node is None:
                return False
            if key == node.key:
                break
            else:
                parent = node  # 부모에 node
                if key < node.key:
                    node = node.left
                    is_left_child = True
                else:
                    node = node.right
                    is_left_child = False
        if node.left is None:
            if node is self.root:
                self.root = node.right
            elif is_left_child:
                parent.left = node.right
            else:
                parent.right = node.right
        elif node.right is None:
            if node is self.root:
                self.root = node.left
            elif is_left_child:
                parent.left = node.left
            else:
                parent.right = node.left

    # def dump(self) -> None:
