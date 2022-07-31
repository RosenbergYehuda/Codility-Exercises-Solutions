def binary_gap(N):
    # convert to binary
    binar = bin(N)[2:].zfill(8)
    # remove the '0' heads and tails
    clean_binar = binar.strip("0")
    # split to gruops of zeros
    splited = clean_binar.split("1")
    # return the largest
    return len(max(splited, key=len))


if __name__ == '__main__':
    print(binary_gap(100))
