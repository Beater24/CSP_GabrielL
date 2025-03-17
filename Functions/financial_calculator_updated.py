#Gabriel Lopez, Updated Financial Calculator on Python

print("Welcome to the Financial Calculator, This program is designed to calculate what percentage of your monthly income should you be saving.")

def info(cost, income, type):
    percent = cost/income *100
    print(f"Your {type} is ${cost:.2f} which is {percent}% of your income.")

def get_user_input(prompt):
    """Function to get user input as a float (without loops or conditionals)."""
    return float(input(prompt))

income = get_user_input("What is your monthly income?\n")
rent = get_user_input("What is your monthly rent?\n")
utilities = get_user_input("What is your monthly expense for utilities?\n")
groceries = get_user_input("What is your monthly expense for groceries?\n")
transportation = get_user_input("What is your monthly expense for transportation?\n")

savings = (income/10)
spending = (income-rent-utilities-groceries-transportation-savings)


info(rent, income, "rent")
info(utilities, income, "utilities")
info(groceries, income, "groceries")
info(transportation, income, "transportation")
info(savings, income, "savings")
info(spending, income, "spending")
print("Thank you for using the Financial Calculator!")