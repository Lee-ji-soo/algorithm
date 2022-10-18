def solution(s):
  answer = 10000
  for i in range(1, len(s)//2 + 1):
    result = ""
    count = 1
    temp = s[:i]
    for j in range(i, len(s) + i, i):
      if temp == s[j:j+i]:
        count += 1
      else:
        if count == 1:
          result += temp
        else:
          result += str(count) + temp
        temp = s[j:j+i]
        count = 1
    print(len(result), answer, min(10000, len(result)))
    answer = min(answer, len(result))
  return answer
print(solution('aabbaccc'))

#문제풀이과정 : https://sooleeandtomas.tistory.com/m/88

# temp a s[j:j+i] a
# same
# temp a s[j:j+i] b
# diff
# result 2a
# ---------------------------

# temp b s[j:j+i] b
# same
# temp b s[j:j+i] a
# diff
# result 2a2b
# ---------------------------

# temp a s[j:j+i] c
# diff
# result 2a2ba
# ---------------------------

# temp c s[j:j+i] c
# same
# temp c s[j:j+i] c
# same
# temp c s[j:j+i] 
# diff
# result 2a2ba3c
# ---------------------------


# temp aa s[j:j+i] bb
# diff
# result aa
# ---------------------------

# temp bb s[j:j+i] ac
# diff
# result aabb
# ---------------------------

# temp ac s[j:j+i] cc
# diff
# result aabbac
# ---------------------------

# temp cc s[j:j+i] 
# diff
# result aabbaccc
# ---------------------------


# temp aab s[j:j+i] bac
# diff
# result aab
# ---------------------------

# temp bac s[j:j+i] cc
# diff
# result aabbac
# ---------------------------

# temp cc s[j:j+i] 
# diff
# result aabbaccc
# ---------------------------


# temp aabb s[j:j+i] accc
# diff
# result aabb
# ---------------------------

# temp accc s[j:j+i] 
# diff
# result aabbaccc
# ---------------------------
