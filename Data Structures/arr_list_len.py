# The problem: https://app.codility.com/programmers/trainings/7/arr_list_len/


def solution(A):
    current = A[0]
    counter = 1
    while current != -1:
        counter += 1
        current = (A[current])
    return counter


if __name__ == '__main__':
    A = [1, 4, -1, 3, 2]
    print(solution(A))
