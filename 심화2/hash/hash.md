# hash table 만드는 내부 원리:
1. hash key 키값이란, 배열에서 index외의 타입인 키값을 사용하기 위해
2. hash function를 거쳐
3. hash Code 값을 만들어낸다.
4. hash bucket는 hashCode를 담아놓는 곳을 말한다. (인접리스트 형태로 저장한다)


# hash를 사용하는 경우
1. 많은 데이터 중 특정 데이터를 빨리 찾고자 할 때.