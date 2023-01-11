animalsAtFarm = ("Cow", "Sheep", "Goat", "Chicken", "Duck",
                 "Horse", "Rabbit", "Honeybees", "Turkey")
animalsAtFarm.append("Cat")
print(animalsAtFarm)
print(animalsAtFarm[:3])
print(animalsAtFarm[-3:])
print(animalsAtFarm)


def test(lst, char):
    result = [i for i in lst if i.startswith(char)]
    return result


char = "C"
print(test(animalsAtFarm, char))
