// Gabriel Lopez, Functions Notes on C

#include <stdio.h>
int num;
int add(int numOne, int numTwo){
    return numOne+numTwo;
}
void due(char assignment[50], char day[20]){
printf("The %s assignment is due %s\n", assignment, day);
}

int main(void){
    printf("Please tell me a number:\n");
    scanf("%d", num);
    add(4,10);
    add(8,1);
    add(72,5);
    printf("%d", add(72,5));
    return 0;
    due("Functions Notes", "Today");
    due("Hello World Update", "Tomorrow");
    due("Financial Calculator Update", "Friday");
}