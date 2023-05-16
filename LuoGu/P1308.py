word = input()
artical = [x for x in input().split()]

word = word.lower()
la = [x.lower() for x in artical]

count = 0
for i in la:
    count += i.count(word)


if count == 1:
    print("-1")
else:
    print(count, la.index(word))


