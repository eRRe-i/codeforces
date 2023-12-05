n = int(input())

for i in range(n):
    no = int(input())
    list = input().split()
    list = [int(x) for x in list]

    if(len(list) == 1):
        print("YES")

    else:
        list.sort()
        flag = False
        for j in range(no-1):
            if(list[j] == list[j+1]):
                flag = True
                break

        if (flag):
            print("NO")
        else:
            print("YES")

