# The problem: https://app.codility.com/programmers/trainings/4/tree_height/
# This solution i found online, and its so short and elgant, that i had to save it.
# Credit: https://davidjalon.com/index/treeheight/


def solution(T):
    if T:
        return max(solution(T.l), solution(T.r)) + 1
    return -1
