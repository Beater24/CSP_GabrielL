//
#include <stdio.h>

char name[20]; 
int age;
float pi;

int main(void){
    printf("Welcome, what is your name: \n");
    scanf("%s", name);
    printf("How old are you: \n");
    scanf("%d", &age);
    printf("Hello I am %s. I am %d years old")
    //printf("%s\n", name);
    return 0;
}