def solution(brown,yellow):
  answer = 0
  total = brown + yellow
  for col in range(total, 2, -1):
    if (total % col ) == 0:
        row = total // col
        if (row - 2) * (col - 2) == yellow:
          answer = [col, row]
          break
  return answer

  #https://sooleeandtomas.tistory.com/79?category=1045202