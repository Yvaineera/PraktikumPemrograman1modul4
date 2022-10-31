a,b = input().split()
a = int(a) ; b = int(b)
for i in range(1, a + 1) :
    j = i
    while j > 1 :
        print("(%d * %d) + "%(j, b), end='') ; j -= 1
    o = 1 ; hsl = (i * b)
    while o < i :
        hsl += (o * b) ; o += 1
    print("(%d * %d) = %d"%(j, b, hsl))
p = 1 ; q = 1; t = 0
while p <= a :
    t += q * b ; q += p + 1 ; p +=1
print("%d"%(t))