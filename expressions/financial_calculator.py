#Gabriel Lopez, Financial Calculator on Python

# print statement that welcomes user and tells what program does

# ask what their income is (variable an input)
income = float(input("What is your monthly income?\n"))
# ask what their rent is (variable an input)
rent = float(input("What is your monthly rent?\n"))
# ask what their utilities is (variable an input)
utilites = float(input("What is your monthly expense for utilities?\n"))
# ask what their groceries is (variable an input)
groceries = float(input("What is your monthly expense for groceries?\n"))
# ask what their transportation is (variable an input)
transportation = float(input("What is your monthly expense for transportation?\n"))
# calculate savings as 10% of income (income*.1) (variable)
savings = (income/10)
# calculate spending as income-savings-rent-utilities-groceries-transportation (variable)
spending = (income - (rent + utilites + groceries + transportation))
# calculate percent income of rent (rent/income *100) (variable)
income_of_rent = (rent/income *100)
# calculate percent income of utilities (utilities/income *100) (variable)
income_of_utilities = (utilites/income *100)
# calculate percent income of groceries (groceries/income *100) (variable)
income_of_groceries = (groceries/income *100)
# calculate percent income of transportation (transportation/income *100) (variable)

# calculate percent income of spending (spending/income *100) (variable)

# Your rent is $XX.XX which is XX% of your income. (Print)

# Your utlities is $XX.XX which is XX% of your income. (Print)

# Your groceries is $XX.XX which is XX% of your income. (Print)

# Your transportation is $XX.XX which is XX% of your income. (Print)

# Your savings is $XX.XX which is XX% of your income. (Print)

# Your spendings is $XX.XX which is XX% of your income. (Print)