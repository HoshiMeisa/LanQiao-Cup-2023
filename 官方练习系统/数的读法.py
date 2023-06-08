n = int(input())

strn = str(n)

anounce = {
    1: "yi",
    2: "er",
    3: "san",
    4: "si",
    5: "wu",
    6: "liu",
    7: "qi",
    8: "ba",
    9: "jiu",
}


def less4(num):
    n = len(num)
    result = ""

    if n == 1:
        return anounce[int(num)]

    elif n == 2:
        return anounce[int(num[0])] + " shi " + anounce[int(num[1])]

    return anounce[int(num[2])] + " bai " + anounce[int(num[1])] + " shi " + anounce[int(num[0])]



# 7000
answer = ""
if len(strn) < 4:
   for char in strn:
       answer += anounce[int(char)]

