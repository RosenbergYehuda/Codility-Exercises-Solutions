# The problem: https://app.codility.com/programmers/trainings/4/first_unique/
from collections import Counter


def first_unique(A):
    # Counting the items, keep only those which have a count of 1:
    all_unique = [k for k, v in Counter(A).items() if v == 1]
    if len(all_unique) == 0:
        return -1
    return all_unique[0]


if __name__ == '__main__':
    A = [2, 2, 3, 4, 5, 5]
    print(first_unique(A))
