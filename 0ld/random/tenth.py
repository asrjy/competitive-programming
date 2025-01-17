n = 2000000
ar = [False for x in range(n)]
sum = 2
def mul(a):
    i = 2
    p = i*a
    while (p < n):
        ar[p] = 1
        ++i
        p = i*a
while (x < n):
    if(ar[x] == 0):
        sum += x
        mul(x)
    x += 2
print (sum)