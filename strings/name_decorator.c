// Gabriel Lopez, Name Decorator on C
#include <stdio.h>
#include <string.h>

int main(void){
    char name[20];
    char decorator[20];
    char opposing_decorator[20];
    printf("Welcome to the name decorator, This program is made to give your name a little extra touches to make it look better.");
    printf("What is your name?\n");
    scanf("%s", name);
    printf("Choose a symbol for your name to decorate your name.\n");
    scanf("%s", decorator);
    printf("Place the opposing symbol of the symbol you chose earlier (if there isn't a symbol that faces the opposite side just pick the same one you picked earlier\n");
    scanf("%s", opposing_decorator);
   char result[80]; 
   strcpy(result, decorator); 
   strcat(result, name);   
   strcat(result, opposing_decorator);   
   printf("%s", result);  

    return 0;
}
