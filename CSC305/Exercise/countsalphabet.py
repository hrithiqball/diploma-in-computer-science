from itertools import count


# calculation for all alphabet only
y = 'Coding in Python is so much fun!'
count = 0
for letter in y:
    if letter.isalpha():
        count += 1
print(count)

# calculation for all character including spaces
if (y.isalpha):
    print(len(y))
