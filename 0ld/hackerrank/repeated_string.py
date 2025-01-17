string = input()
length = int(input())

temp = length // len(string)
n_a = 0

for i in range(len(string)):
    if(string[i] == 'a'):
        n_a += 1

answer = temp * n_a

for i in range(length - (temp * len(string))):
    if(string[i] == 'a'):
        answer += 1

print(answer)
