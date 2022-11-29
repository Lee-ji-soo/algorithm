from itertools import combinations


def solution(relations):
    row = len(relations)
    col = len(relations[0])

    combi = []
    for i in range(1, col + 1):
        combi.extend(combinations(range(col), i))
    unique = []
    for i in combi:
        temp = [tuple([item[key] for key in i]) for item in relations]
        if len(set(temp)) == row:  # 유일성
            # set(list)은 중복을 제거한다
            # temp는 relation들의 조합이다.
            # set은 이 조합들의 중복을 제거해주기 때문에 만약 중복된 값이 있다면 앞서 선언된 row의 값보다 작게된다.
            # 중복되지 않는다는 것이 곧 그 키가 릴레이션 안에서 유일하다는 것을 말한다.
            candidate = True

            for x in unique:
                if set(x).issubset(set(i)):  # 최소성
                    # unique는 유일키들의 인덱스를 조합을 담아 놓는 공간이다.
                    # 예를들어, 현재의 i는 (0,1)이고 unique 안에 (0)이 들어있다고 가정해보자.0 은 0,1의 부분집합이다.
                    # 그렇기 때문에 0,1이 포함되게 되면 0이 중복되어 버린다. 따라서 이는 최소성에 부합하지 않게 된다.
                    candidate = False
                    break
            if candidate:
                unique.append(i)
    return len(unique)


# 문제풀이 : https://sooleeandtomas.tistory.com/96
