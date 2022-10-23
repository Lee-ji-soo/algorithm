def divide(p):
    open = 0
    close = 0
    for index, i in enumerate(p):
        if i =='(':
            open += 1
        else:
            close += 1
        if open == close:
            return p[:index + 1], p[index + 1:]
    
def check(u):
    stack = []
    
    for i in u:
        if i == '(':
            stack.append(i)
        else:
            if not stack:
                return False
            stack.pop()
    return True

def solution(p):
    if not p:
        return ""
    
    u, v = divide(p)
    
    if check(u):
        return u + solution(v)
    
    else:
        answer = '('
        answer += solution(v)
        answer += ')'
        
        for k in u[1:len(u)-1]:
            if k == '(':
                answer += ")"
            else:
                answer += '('
        return answer


# 문제 풀이 : https://sooleeandtomas.tistory.com/90