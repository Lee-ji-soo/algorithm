N = int(input())

#나의 풀이
for i in range(N):
  sen = input().split(' ')
  arr = []
  for a in list(sen):
    b = a[::-1] #단어를 뒤집어서 저장해줌
    arr.append(b)
  print((' ').join(arr))

#다른이의 풀이 >>좀더 스택 주제에 어울리는 풀이방법
for i in range(N):
  string = input()
  string += " "
  stack = []
  for j in string:
    print('j', j)
    if j != " ":
      stack.append(j)
    else:
      while stack:
        # print(stack)
        print(stack.pop(), end="")
      print(" ", end="")

#풀이과정: https://sooleeandtomas.tistory.com/82