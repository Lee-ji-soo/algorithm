from collections import defaultdict
from math import ceil


def getTime(time):
    h, m = time.split(":")
    return int(h) * 60 + int(m)


def calcFee(time, baseTime, baseFee, unitTime, unitFee):
    extraTime = max(0, time - baseTime)
    extraFee = baseFee + ceil(extraTime / unitTime) * unitFee
    return extraFee


def solution(fees, records):
    answer = []

    baseTime, baseFee, unitTime, unitFee = fees

    parkRecord = defaultdict(int)
    parkLot = dict()

    for record in records:
        time, carNum, type = record.split(" ")
        time = getTime(time)
        if type == "IN":
            parkLot[carNum] = time
        else:
            parkRecord[carNum] += time - parkLot[carNum]
            del parkLot[carNum]

    for carNum in parkLot:
        parkRecord[carNum] += getTime("23:59") - parkLot[carNum]

    for carNum in parkRecord:
        parkFee = calcFee(parkRecord[carNum], baseTime, baseFee, unitTime, unitFee)
        answer.append([carNum, parkFee])
    answer.sort()
    answer = [x[1] for x in answer]
    return answer


# 문제풀이 : https://sooleeandtomas.tistory.com/97
