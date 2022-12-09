def solution(info, query):
    answer = [0 for i in range(len(query))]
    newInfo = []
    newQuery = []

    for i in info:
        newInfo.append(i.split(" "))
    for i in query:
        replaced = i.replace("and", "")
        split = replaced.split(" ")
        split = [v for v in split if v]
        newQuery.append(split)

    for i in range(len(newQuery)):
        for j in range(len(newInfo)):
            p = True
            if int(newInfo[j][4]) < int(newQuery[i][4]):
                p = False
                continue
            for k in range(4):
                if newQuery[i][k] == "-":
                    p = True
                    continue
                if newInfo[j][k] != newQuery[i][k]:
                    p = False
                    break
                else:
                    p = True
            if p == True:
                answer[i] += 1

    return answer


print(
    solution(
        [
            "java backend junior pizza 150",
            "python frontend senior chicken 210",
            "python frontend senior chicken 150",
            "cpp backend senior pizza 260",
            "java backend junior chicken 80",
            "python backend senior chicken 50",
        ],
        [
            "java and backend and junior and pizza 100",
            "python and frontend and senior and chicken 200",
            "cpp and - and senior and pizza 250",
            "- and backend and senior and - 150",
            "- and - and - and chicken 100",
            "- and - and - and - 150",
        ],
    )
)
