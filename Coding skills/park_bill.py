# The problem: https://app.codility.com/programmers/trainings/5/parking_bill/
import math


def parking_sum(E, L):
    # copy the times without the colon.
    midlen = len(L) // 2
    newE, newL = E[:midlen] + E[midlen+1:], L[:midlen] + L[midlen+1:]
    # calculate the time
    total_hours = (int(newL) - int(newE)) / 100
    # round upwards
    round_total = math.ceil(total_hours)
    # elegant way to calculate the bill
    finel = round_total * 4 + 1
    return finel


if __name__ == '__main__':
    print(parking_sum("10:00", "13:38"))
