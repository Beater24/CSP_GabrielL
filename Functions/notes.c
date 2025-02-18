// Gabriel Lopez, Functions Notes on C
#include <stdio.h>
int num;
int add(int numOne, int numTwo){
    return numOne+numTwo;
}

int main(void){
    printf("Please tell me a number:\n");
    scanf("%d", num);
    add(4,10);
    add(8,1);
    add(72,5);
    printf("%d", add(72,5));
    return 0;
}