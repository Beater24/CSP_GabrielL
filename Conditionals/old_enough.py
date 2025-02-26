#Gabriel Lopez, Old Enough on Python

print("Welcome, This program is meant to tell what you can do at the age you are.")

age = int(input("How old are you?"))
if age < 5:
    print("You are not old enough to go to school, Man I don't even know what you can do at this point.\n")
elif age >= 18:
    print("You are old enough to vote.\n")
elif age >= 16:
    print("You are old enough to drive.\n")
elif age >= 15:
    print("You are old enough to get a learners permit.\n")
elif age >= 5:
    print("You are old enough to go to school.\n")
else:
    print("Why did you put a string?")