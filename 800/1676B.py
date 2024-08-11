
n = int(input())

for i in range(n):

    no = int(input())
    boxes = input().split()
    boxes = [int(x) for x in boxes]
    count = 0
    for x in boxes:
        count = count + x - min(boxes)
    print(count)