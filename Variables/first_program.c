// Gabriel Lopez, First program on C
#include <stdio.h>

char name[30];
char favorite_food[30];

int main(void){
    printf("Hello, What is your name?");
    
    scanf("%s", name);

    printf("What is your favorite food?");

    scanf("%s", favorite_food);

    printf("%s really likes %s", name, favorite_food);
    
    return 0;
}