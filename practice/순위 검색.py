query = [
    "java and backend and junior and pizza 100",
    "python and frontend and senior and chicken 200",
    "cpp and - and senior and pizza 250",
    "- and backend and senior and - 150",
    "- and - and - and chicken 100",
    "- and - and - and - 150",
]

info = [
    ["java", "backend", "junior", "pizza", 150],
    ["python", "frontend", "senior", "chicken", 150],
    ["cpp", "backend", "senior", "pizza", 260],
    ["java", "backend", "junior", "chicken", 80],
    ["python", "backend", "senior", "chicken", 50],
]

new = []
for i in query:
    replace = i.replace("and", "")
    split = replace.split(" ")
    split = [v for v in split if v]
    new.append(split)

answer = 0
for i in range(len(info)):
    for j in range(len(query)):
        flag = 0
        for k in range(4):
            if info[i][k] != query[j][k]:
                if query[j][k] != "-":
                    flag = 1
                    break
        if flag == 0:
            if int(info[i][4]) >= int(query[j][4]):
                answer[j] += 1

print(new)
# [['java', 'backend', 'junior', 'pizza', '100'], ['python', 'frontend', 'senior', 'chicken', '200'], ['cpp', '-', 'senior', 'pizza', '250'], ['-', 'backend', 'senior', '-', '150'], ['-', '-', '-', 'chicken', '100'], ['-', '-', '-', '-', '150']]
