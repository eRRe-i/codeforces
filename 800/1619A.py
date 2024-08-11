n = int(input())

for i in range(n):

    s = input()
    l = int(len(s)/2)


    if(len(s)%2 != 0):
        print("NO")
    elif(s[:l] == s[l:]):
        print("YES")
    else:
        print("NO")