// Gabriel Lopez, TEMPLATE
#include <stdio.h>
#include <string.h> // Needed to compare strings

char name[]= "Vienna";
int num;
int main(void){
//10. How do you write an if statement in C?
if(strcmp(name, "Vienna")==0){ //strcmp means string comparison
    printf("Hello Ms. LaRose, welcome to class.\n");

//11. How do you write else statements in C?
}else{
    printf("Hello student, welcome to class.\n");
}
printf("How many siblings do you have?\n");
scanf("%d",&num);
//12. How do you write elif/ else if statements in C?
if(num == 0){
    printf("You are an only child\n");
}else if(num <= 2){
    printf("You have couple of siblings\n");
}else if(num <= 5){
    printf("You have a few siblings\n");
}else{
    printf("You have a lot of siblings\n");
}


//13. How do you write the 3 logical operators in C?
// && = and
// || = or
// !! = not

if(num <10 && num >5){
    printf("%d is a large single digit number\n", num);
}else if (num == 7 || num == 13){
    printf("That is an unlucky number\n", num);
}else if(!num < 10){
    if(num == 12){
        printf("That is a dozen!\n");
    }else{   
    printf("%d is a a big number\n", num);
}else{
    printf("You type in %d\n", num);
}

    
    return 0;
}

