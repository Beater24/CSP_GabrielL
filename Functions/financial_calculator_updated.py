#Gabriel Lopez, Updated Financial Calculator on Python

def info(cost, income, type):
    percent = cost/income *100
    print(f"Your {type} is ${cost:.2f} which is {percent}% of your income.")

# print statement that welcomes user and tells what program does
print("Welcome to the Financial Caluculator, This program is designed to calculate what percentage of your monthly income should you be saving.")
# ask what their income is (variable an input)
income = float(input("What is your monthly income?\n"))
# ask what their rent is (variable an input)
rent = float(input("What is your monthly rent?\n"))
# ask what their utilities is (variable an input)
utilities = float(input("What is your monthly expense for utilities?\n"))
# ask what their groceries is (variable an input)
groceries = float(input("What is your monthly expense for groceries?\n"))
# ask what their transportation is (variable an input)
transportation = float(input("What is your monthly expense for transportation?\n"))
# calculate savings as 10% of income (income*.1) (variable)
savings = (income/10)
saving_goal = (savings/income *100)
spending = (income-rent-utilities-groceries-transportation-savings)

# Your rent is $XX.XX which is XX% of your income. (Print)

info(rent, income, "rent")
info(utilities, income, "utilities")
info(groceries, income, "groceries")
info(transportation, income, "transportation")
info(savings, income, "savings")
info(spending, income, "spending")
print("Thank you for using the Financial Calculator!")