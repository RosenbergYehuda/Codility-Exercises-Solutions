# The problem: https://app.codility.com/programmers/trainings/5/parking_bill/
import math


def parking_sum(E, L):
    if E != L:
        # copy the times without the colon.
        midlen = len(L) // 2
        newE, newL = E[:midlen] + E[midlen+1:], L[:midlen] + L[midlen+1:]
        # calculate the time
        total_hours = (int(newL) - int(newE)) / 100
        # round opwards
        round_total = math.ceil(total_hours)

        finel = 2 + 3 + (round_total-1) * 4
        return finel
    return 0


if __name__ == '__main__':
    print(parking_sum("10:30", "10:38"))
