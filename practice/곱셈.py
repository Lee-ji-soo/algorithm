#(1) 
a = int(input())
b = str(input())
print(b, b[2])

a1 = int(b[2]) * a
a2 = int(b[1]) * a
a3 = int(b[0]) * a
print(a1, a2, a3, a * int(b))


#(2) 문자열 포문
a = int(input())
b = str(input())

for i in range(2, -1, -1):
  print(int(b[i]) * a)
print(a * int(b))

#(3) 자릿수
a = int(input())
b = int(input())

a1 = int(b % 10) * a
a2 = int(b % 100//10) * a
a3 = int(b // 100) * a

print(a1, a2, a3, a * int(b))

#https://sooleeandtomas.tistory.com/83