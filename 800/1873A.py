n = int(input())

for i in range(n):

    b = input()
    a = [*b]

    if(b == "cba"):
        print("YES")
    elif(a[0] == 'c' or a[2] == 'a'):
        print("NO")
    else:
        print("YES")