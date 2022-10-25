from itertools import permutations

def operator(op, num1, num2):
    intNum1 = int(num1)
    intNum2 = int(num2)
    if op == '+':
        return str(intNum1 + intNum2)
    if op == '-':
        return str(intNum1 - intNum2)
    if op == '*':
        return str(intNum1 * intNum2)
    
def calc(expression, operators):
    temp = ''
    exarr = []
    for i in expression:
        if i.isdigit() == True:
            temp += i
        else:
            exarr.append(temp)
            exarr.append(i)
            temp = ''
    exarr.append(temp)
    
    for op in operators:
        stack = []
        while len(exarr) != 0:
            temp = exarr.pop(0)
            if temp != op:
                stack.append(temp)
            else:
                stack.append(operator(op, stack.pop(), exarr.pop(0)))
        exarr = stack
    return abs(int(exarr[0]))

def solution(expression):
    answer = []
    operators = list(permutations(['-','+', '*'],3))

    for o in operators:
        answer.append(calc(expression, o)) 
    
    return max(answer)



#문제풀이 :https://sooleeandtomas.tistory.com/92