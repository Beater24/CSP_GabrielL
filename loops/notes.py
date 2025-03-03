# Gabriel Lopez, Loops Notes on Python

#1.What is a loop? 
#A section of code that repeats multiple times

#2. What are the two types of loops?
# for loop
nums = [12,3,66,7,3,3,2]

for num in nums:
    print(num)

    #while loop
x = 0

while x < 10:
    print(x)
    x+= 1 

#3. What is iteration
# That specific instance of the loop
# iteration the amount of times you are looping through 

#4. What are lists?
# A list is a group of many things that are related. IN PYTHON, a list is a variable that stores multiple values
nums = [1,2,3,4,5,6,7,6]
siblings = ["Alex", "Katie", "Andrew", "Vienna", "Tia", "Treyson", "Xavier", "Hailey"]
print(nums) #prints whole list is ugly
print(siblings[3]) #prinys 1 item from the list

siblings[7] = "Jake"
siblings.pop(5)
siblings.insert(1, "Jayshree")
siblings.insert(2, ["Joe","Noah", "Zee"])
print(siblings)


#5. How do you make lists in python? 
# Step 1. use brackets
# Step 2. add in items with CORRECT DATA TYPES. Strings have quotations marks, integers do not.
# Step 3. have a coma between each item.

#6. How do you make for loops in python? 
for sibling in siblings: #When you make a list, use a plural word. Then you put the singular version
    print(sibling)

for x in range(0, 101, 20):
    print(x) 

#7. How do you make while loops in python?
import random
x = 1 #varible to keep count of iteration
goose = random.randint(1,20)

while x <= 20:
    if x == goose:
        print("Goose!")
        break #tells the loop to stop
    else:
        print("Duck")
    x+= 1

#continue moves on to the next iteration without finishing 