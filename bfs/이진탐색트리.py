class Node:
  def __init__(self, key, value, left, right):
    self.key = key
    self.value = value
    self.left = left
    self.right = right 

class BinarySearchTree():
  def __init__(self) -> None:
    self.root = None #루트 설정

  def search(self, key) -> int:
    node = self.root #루트
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
    
  def remove(self, key) -> bool:

  def dump(self) -> None:
