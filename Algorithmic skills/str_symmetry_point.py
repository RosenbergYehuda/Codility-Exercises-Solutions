def symmetry(S):
    if len(S) > 0 :
        #spliting the string without the middel
        firstpart, secondpart = S[:len(S)//2], S[len(S)//2+1:]
        #comparing the first half to the second one in revers
        if firstpart == secondpart[::-1]:
            return len(S)//2
    
    return -1
   

if __name__ == '__main__':
    S = "ABDFDBA"
    print(symmetry(S))