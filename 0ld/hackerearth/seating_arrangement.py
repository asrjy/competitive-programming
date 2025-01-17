t = int(input())
while(t > 0):
    s = int(input())
    side = ""
    lor = 1
    b12 = s % 12
    lor = 1 if b12 <= 6 else lor = 0
    b6 = b12 % 6
    if(b6 == 1 or b6 == 0):
        side = "WS"
    elif(b6 == 2 or b6 == 5):
        side = "MS"
    else:
        side = "AS"
    t -= 1
