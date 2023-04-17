def isCouple(opener, closer):
    if closer == "]":
        return opener == "["
    if closer == "}":
        return opener == "{"
    if closer == ")":
        return opener == "("


def checkIsValid(s):
    stack = []
    length = len(s)
    for i in range(length):
        if len(stack) > 0 and isCouple(stack[-1], s[i]):
            stack.pop()
        else:
            stack.append(s[i])

    if len(stack) == 0:
        return 1
    else:
        return 0


def solution(s):
    arr = list(s + "0")
    length = len(arr) - 1
    cnt = 0
    round = 0
    while True:
        if round > length - 1:
            break
        if checkIsValid(arr[0:length]) == True:
            cnt += 1
        arr[length] = arr[0]
        for i in range(length + 1):
            arr[i - 1] = arr[i]
        arr[length - 1] = arr[length]
        round += 1
    return cnt
