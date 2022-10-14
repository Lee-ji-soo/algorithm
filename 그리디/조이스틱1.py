def solution(name):
  alphabet=list('ABCDEFGHIJKLMNOPQRSTUVWXYZ')
  arr = []

  for j in name:
    for index, i in enumerate(alphabet):
      if i == j:
        print(j, i)
        arr.append(index)
  cur = 0
  count = 0
  while arr:
    char = arr[0]
    
    print('----------------', '[0]',arr[0],'cur',cur)
    #오른쪽
    if abs(char - cur) > abs(len(alphabet) - char):
      count += abs(len(alphabet) - char)
      print('>', 'plus',  abs(len(alphabet) - char),  'count', count)
    #왼쪽
    elif abs(char - cur) > char + 1:
      count += char + 1
      print('<', 'plus', char + 1,  'count', count)
    else:
      count += abs(char - cur) 
      print('^', 'plus', abs(char - cur),  'count', count)

    cur = arr[0]
    arr.pop(0)
    print(' ')
  return count

print(solution('SAAAAAARRM'))