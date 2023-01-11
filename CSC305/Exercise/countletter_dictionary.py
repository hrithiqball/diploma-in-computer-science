from collections import Counter

print("Input your first name:")
firstname = input()
print("Input your last name:")
lastname = input()

fullname = firstname + lastname

x = {}
for letter in fullname:
    if letter not in x:
        x[letter] = 0
    x[letter] += 1
print(x)
