info = [
    "java backend junior pizza 150",
    "python frontend senior chicken 210",
    "python frontend senior chicken 150",
    "cpp backend senior pizza 260",
    "java backend junior chicken 80",
    "python backend senior chicken 50",
]

query = [
    "java and backend and junior and pizza 100",
    "python and frontend and senior and chicken 200",
    "cpp and - and senior and pizza 250",
    "- and backend and senior and - 150",
    "- and - and - and chicken 100",
    "- and - and - and - 150",
]

from collections import defaultdict
from itertools import combinations


def solution(info, query):
    answer = []

    infos = defaultdict(list)

    for i in info:
        conditions = i.split()[:-1]
        score = int(i.split()[-1])
        # print(conditions, score)
        for r in range(5):
            # print(r)
            combis = list(combinations(range(4), r))
            # print(combis)

            for c in combis:
                test_cases = conditions[:]
                print(test_cases)
                for v in c:
                    test_cases[v] = "-"
                infos["_".join(test_cases)].append(score)
                # print(infos)
    for item in infos:
        infos[item].sort()
    print(infos)


print(solution(info, query))
