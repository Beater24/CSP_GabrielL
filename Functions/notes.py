# Gabriel Lopez, Functions Notes on Python

#functions hold actions to be reused 

#def add():
    #numOne= int(input("Please tell me a number:\n"))
    #numTwo= int(input("Please tell me a another number:\n"))
    #print(numOne+numTwo)

#number= int(input("Please tell me a number:\n")) #perameters set the name of the variable (just for the function)
#def add(numOne,numTwo):
    #return numOne + numTwo 

#print(add(number,21)) #arguments set the vaule of the variable just for that instance of the function
#print(add(8,12))
#add(6,4)

def values(type):
    return input(f"Please give me a {type}:\n")

name =values("name")
place = values("place")
verb = values("verb (past tense)")

print(f"{name} was really fast getting to {place} because they {verb} the whole way there.")