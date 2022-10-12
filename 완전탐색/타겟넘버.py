#(1)
def solution(numbers, target):
  tree = [0]
  for i in numbers:
    sub = []
    for j in tree:
      sub.append(j + i)
      sub.append(j - i)
    tree = sub
    print(tree)
  return tree.count(target)

#(2)
from itertools import product
def solution(numbers, target):
    l = [(x, -x) for x in numbers]
    s = list(map(sum, product(*l))) #중복순열
    return s.count(target)

#https://sooleeandtomas.tistory.com/85