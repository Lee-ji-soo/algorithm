arr = [1, 15, 7, 9, -6]

sum = []

temp = 0
for i in range(5):
    add = temp + arr[i]
    sum.append(add)
    temp = add

print(sum[-1])
