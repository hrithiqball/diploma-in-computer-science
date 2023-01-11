from collections import Counter

print("Input your first name:")
firstname = input()
print("Input your last name:")
lastname = input()
fullname = firstname + lastname

answer = Counter(fullname)
print(answer)
