// Gabriel Lopez, Updated Financial Calculator on C

#include <stdio.h>
#include <math.h>

void info(float cost, float income, char* type) {
    float percent = (cost / income) * 100;
    printf("Your %s is $%.2f, which is %.2f%% of your income.\n", type, cost, percent);
}

float user_input(char* prompt) {
    float value;
    printf("%s", prompt);
    scanf("%f", &value);  
    return value;
}

int main() {
    printf("Welcome to the Financial Calculator! This program calculates what percentage of your monthly income is spent on various expenses.\n\n");

    float income = user_input("What is your monthly income?\n");
    float rent = user_input("What is your monthly rent?\n");
    float utilities = user_input("What is your monthly expense for utilities?\n");
    float groceries = user_input("What is your monthly expense for groceries?\n");
    float transportation = user_input("What is your monthly expense for transportation?\n");

    float savings = income * 0.10;
    float spending = income - (rent + utilities + groceries + transportation + savings);

    printf("\n--- Financial Breakdown ---\n");
    info(rent, income, "rent");
    info(utilities, income, "utilities");
    info(groceries, income, "groceries");
    info(transportation, income, "transportation");
    info(savings, income, "savings");
    info(spending, income, "spending");

    printf("\nThank you for using the Financial Calculator!\n");
    return 0;
}








