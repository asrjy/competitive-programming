#Problem Link
#https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=396

testcases = int(input())
inputs = []

for i in range(testcases): inputs.append(input())

for i in inputs:
    for j in range(1, len(i)+1):
        setelements = [''.join(list(i)[k:k+j]) for k in range(0, len(i), j)] 
        if (len(set(setelements))) == 1:
            print(j)
            break
        else:
            continue
