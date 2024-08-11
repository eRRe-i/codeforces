n = int(input())

for i in range(n):

    a = int(input())

    v = input().split()
    v = [int(x) for x in v]

    v.sort()

    count = 0
    lnum = None
    

    for i in range(a):

        if(v[i] == lnum):

            count = count+1

            if count == 3:
                print(v[i])
                break
        
        else:
            count = 1

        lnum = v[i]

    if(count != 3):
        print(-1)
    