a, b = input().split()
a = int(a) ; b = int(b)
if a > b :
    i = a ; j = b
    while i >= b and j <= a:
        print("%d %d"%(i, j), end='')
        if i == b : break
        else : print(" - ", end='')
        i -= 1 ; j += 1
else :
    i = a ; j = b
    while i <= b and j >=a :
        print("%d %d"%(i, j), end='')
        if i == b : break
        else : print(" - ", end='')
        i += 1 ; j -=1