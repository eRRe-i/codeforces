n = int(input())

for i in range(n):

    v = int(input())
    if(v < 1400):
        print("Division 4")
    elif(v >= 1400 and v < 1600):
        print("Division 3")
    elif(v >= 1600 and v < 1900):
        print("Division 2")
    else:
        print("Division 1")