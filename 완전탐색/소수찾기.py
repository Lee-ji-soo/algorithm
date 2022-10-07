from itertools import permutations

def solution(numbers):
    answer = 0
    case = makeCase(numbers)
    for n in case:
        if check(n):
            answer += 1
    return answer
    
    
def makeCase(numbers):
    result = []
    for i in range(1, len(numbers) + 1):
        permutated = map(''.join, permutations(numbers, i))
        mapped = list(map(int, permutated))
        result.extend(mapped)
    result = list(filter(lambda x:x > 1, list(set(result))))
    return result
    
    
def check(number):
    for i in range(2, int(number * 1/2) + 1):
        if number % i == 0:
            return False
        return True

# 풀이과정 : https://sooleeandtomas.tistory.com/80