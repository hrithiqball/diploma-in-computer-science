def countCharacter(str):
    countA = 0
    for countA in str:
        if str.isalpha():
            countA += 1
    print(countA)
    countB = 0
    for countB in str:
        if str.isdigit():
            countB += 1
    print(countB)


# main code
s = 'Testing 123 1 2 3'
countCharacter(s)
