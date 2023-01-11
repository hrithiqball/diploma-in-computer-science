gender = input("Enter your gender: ")
height = input("Enter your height: ")
if (gender == "female"):
    if (height >= 58):
        print("You may join the US Army")
    else:
        print("You are NOT qualified to join the US Army")
if (gender == "male"):
    if(height >= 60):
        print("You may join the US Army")
    else:
        print("You are NOT qualified to join the US Army")
