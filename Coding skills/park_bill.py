# The problem: https://app.codility.com/programmers/trainings/5/parking_bill/
import math


def parking_sum(E, L):
    # copy the times without the colon.
    newE, newL = E[:2] + E[3:], L[:2] + L[3:]
    # calculate the time
    total_hours = (int(newL) - int(newE)) / 100
    # round upwards
    round_total = math.ceil(total_hours)
    # elegant way to calculate the bill
    finel = round_total * 4 + 1
    return finel


if __name__ == '__main__':
    print(parking_sum("10:00", "13:38"))
