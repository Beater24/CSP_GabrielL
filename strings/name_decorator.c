// Gabriel Lopez, Name Decorator on C
#include <stdio.h>

int main(void){
    char name[20];
    char decorator[3];
    printf("What is your name?\n");
    scanf("%s", name);
    printf("Choose a symbol for your name to decorate your name.\n");
    printf("Place the opposing symbol of the symbol you chose earlier\n");
    scanf("%s", decorator);
    strcat(decorator,decorator,decorator,name,decorator,decorator,decorator)

    return 0;
}