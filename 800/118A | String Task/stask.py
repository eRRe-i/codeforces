n = int(input())
vogals = ["a", "e", "i", "o", "u", "y"]

for i in range(n):

    s = input()
    s = s.lower()

    for j in vogals:
        s =  s.replace(j, "")

    for i in s:
        print('.',i, end='', sep='')

    print()
    