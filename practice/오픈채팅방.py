def solution(record):
  answer = []
  map = {}
  for i in record:
    words = i.split();
    if len(words) > 2:
      map[words[1]]=words[2]

  for re in record:
    sen = re.split()
    if sen[0] == 'Enter': 
      answer.append('%s님이 들어왔습니다.' % map[sen[1]])
    elif sen[0] == 'Leave':
      answer.append(map[sen[1]] +'님이 나갔습니다.')  
  return answer

#print(solution(["Enter uid1234 Muzi", "Enter uid4567 Prodo","Leave uid1234","Enter uid1234 Prodo","Change uid4567 Ryan"]))

#print('%s,%s,%s,%d,%f' %('EAST','WEST',"SOUTH", 31, 3))

#https://sooleeandtomas.tistory.com/m/87