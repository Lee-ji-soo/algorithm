def isPrime(k):
    if k == 2 or k == 3:
        return True
    if k % 2 == 0 or k < 2:
        return False
    for i in range(3, int(k**0.5) + 1, 2):
        if k % i == 0:
            return False
    return True


def convert(n, base):
    k = ""
    while n > 0:
        k += str(n % base)
        n = n // base
    return "".join(reversed(k))


def solution(n, k):
    jinsu = convert(n, k)
    print(jinsu)
    answer = 0
    for i in jinsu.split("0"):
        if i == "":
            continue
        if i and isPrime(int(i)):
            answer += 1
    return answer


print(solution(110011, 10))
# 문제 풀이 : https://sooleeandtomas.tistory.com/98
