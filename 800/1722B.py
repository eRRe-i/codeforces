t = int(input())

for i in range(t):

    n = int(input())

    a = input()
    b = input()

    a = a.replace("G", "B")
    b = b.replace("G", "B")

    if( a == b):
        print("YES")
    else:
        print("NO")