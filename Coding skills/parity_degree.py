# The problem: https://app.codility.com/programmers/trainings/5/parity_degree/

def highest_power(N):
    # the binary representation without the 'b'
    binar = bin(N)[2:].zfill(8)
    # convert it to a list
    lst = [int(x) for x in str(binar)]
    # reverse the list
    lst.reverse()
    # find the first 'one' from the right
    for i in range(len(lst)):
        if lst[i] == 1:
            return i
    return 0


if __name__ == '__main__':
    print(highest_power(24))
