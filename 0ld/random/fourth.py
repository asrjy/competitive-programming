n = 0
for i in range(100,999):
    for j in range(100,999):
        pro = i * j
        if pro > n:
            strn = str(pro)
            if strn == strn[::-1]:
                n = i * j
print(n)