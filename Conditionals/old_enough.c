// Gabriel Lopez, Old Enough on C 
#include <stdio.h>

int main(void){
    printf("Welcome, This program is meant to tell what you can do at the age you are.")
    int age; 
    printf("How old are you?\n");
    scanf("%d", &age);
if(age < 5){
    printf("Man, you can't even do anything other than just exist.\n");
}else if(age >= 18){
    printf("You are old enough to vote.\n");
}else if(age >= 16){
    printf("You are old enough to drive.\n");
}else if(age >= 15){
    printf("You are old enough to get your learners permit.\n");
}else if(age >= 5){
    printf("You are old enough to go to school.\n");
}else{
    printf("Why did write a string or a float?");
}
    return 0;
}
