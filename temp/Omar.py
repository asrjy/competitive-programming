test_cases = int(input())
inputs = []
for i in range(test_cases):
    inputs.append([i for i in input().split()])
for i in inputs:
    sum = 0
    for j in i:
        sum = int(j) + sum
    print(sum)
    sum = 0
