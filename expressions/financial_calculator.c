//Gabriel Lopez, Financial Calculator on C
#include <stdio.h>
#include <math.h>

int main(void){
    float income, rent, utilities, groceries, transportation, savings, expenses, total; 
    float iorent, ioutilities, iogroceries, iotransportation, ioexpenses, iosavings;
    printf("Welcome to the Financial Calculator!\n");
    printf("How much do you make monthly?");
    scanf("%f", &income);
    printf("What is your monthly rent?");
    scanf("%f", &rent);
    printf("What is your monthly payment for utilities?");
    scanf("%f", &utilities);
    printf("What is your monthly payment for groceries");
    scanf("%f", &groceries);
    printf("What is your monthly payment for transportation?");
    scanf("%f", &transportation);
    expenses = rent + utilities + groceries + transportation;
    savings = income * .2;
    total = income - savings - expenses;
    printf("Your monthly income is $%.2f\n", income);
    printf("Your monthly expenses are $%.2f\n", expenses);
    printf("Your monthly savings is $%.2f\n", expenses);
    printf("You have $%.2f\n", total);
    iorent = rent/income *100;
    ioutilities = utilities/income *100;
    iogroceries = groceries/income *100;
    iotransportation = transportation/income *100;
    ioexpenses = expenses/income *100;
    iosavings = savings/income *100;
    printf("Your expenses are %.1f%% of your income\n", ioexpenses);
    printf("Your savings are %.1f%% of your income\n", iosavings);
    return 0;
}