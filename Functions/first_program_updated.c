// Gabriel Lopez, TEMPLATE
#include <stdio.h>

void greet(char name[]) {
    printf("Hello, %s!\n", name);
}
int main(void){
    greet("Alice");
    greet("Bob");
    greet("Charlie");
    greet("David");
    greet("Eve");
    return 0;
}