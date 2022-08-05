# The priblem: https://app.codility.com/programmers/trainings/5/three_letters/


def three_only(A, B):
    if A >= B:
        large = 'a'
        small = 'b'
    else:
        large = 'b'
        small = 'a'
    lst = []
    counter = 0
    lst = lst + [large] * max(A, B)
    # Edge cases
    if A and B > 0:
        if A+B < 4:
            lst += [small] * min(A, B)
        # Average cases
        else:
            i = 0
            while i < len(lst)-1:
                if lst[i] == lst[i+1] and counter < min(A, B):
                    # insert in a 2:1 pattern
                    lst.insert(i+2, small)
                    counter += 1
                i += 1
            # if i stil have items from the small group to add to the list
            i = 0
            while i < len(lst)-1:
                if counter < min(A, B):
                    if lst[i] == large:
                        # insert in a 1:1 pattern
                        lst.insert(i+1, small)
                        counter += 1
                i += 1

    s = ''.join(lst)
    return s


if __name__ == '__main__':
    A = 2
    B = 0
    print(three_only(A, B))
