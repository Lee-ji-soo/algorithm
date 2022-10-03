import sys
unit = sys.stdin.readline().strip()
num = sys.stdin.readline().strip()

nums = []
for i in range(int(unit)-1, -1, -1):
  nums.append(num[i])
  if (i != 0 and i % 3 == 0):
    nums.append(',')
print(''.join(nums))

# 풀이정리 : https://sooleeandtomas.tistory.com/76