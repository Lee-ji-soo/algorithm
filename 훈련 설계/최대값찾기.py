arr = [[1, 5, 4, 2], [6, 6, 5, 1]]

hang = []
yul = []

for i in arr:
    sum = 0
    for j in range(len(arr[0])):
        sum += i[j]
    hang.append(sum)
    sum = 0

for i in range(len(arr[0])):
    sum = 1
    for j in range(len(arr)):
        sum *= arr[j][i]
    yul.append(sum)
    sum = 0


maxes = (max(hang), max(yul))
print(max(maxes))
