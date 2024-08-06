x = int(input())

for i in range(x):

    v = input()
    s = input()

    if(len(s) != 5):
        print("NO")
        continue

    if('T' not in s or 'i' not in s or 'm' not in s or 'u' not in s or 'r' not in s):
        print("NO")
    else:
        print("YES")