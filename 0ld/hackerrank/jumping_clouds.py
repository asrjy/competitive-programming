def get_solution(pos, clouds, jumps):
    if(pos == len(clouds) - 3):
        if(clouds[pos + 2] == 0):
            return jumps+1
    elif(pos == len(clouds) - 2):
        if(clouds[pos+1] == 0):
            return jumps+1
    else:
        if(clouds[pos+2] == 0):
            return get_solution(pos+2, clouds, jumps+1)
        elif(clouds[pos+1] == 0):
            return get_solution(pos+1, clouds, jumps+1)


n = int(input())
clouds = list(map(int, input().split()))
jumps = 0
print(get_solution(0, clouds, 0))
