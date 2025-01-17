str = input()
if(str[-2:] == "PM"and str[:2]!="12"):
    print((int(str[:2]) + 12)%24, end = "")
    print(str[2:8])
elif(str[:2]=="12" and str[-2:] == "AM"):
    print("00", end = "")
    print(str[2:8])    
else:
    print(str[:8])
