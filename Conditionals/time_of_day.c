// Gabriel Lopez, Time of Day on C

#include <stdio.h>
#include <time.h>

int main(void){

    //current hour
    time_t now = time(NULL);

    struct tm * tm_struct = localtime(&now);
    int hour = tm_struct->tm_hour;  //military time! (0-23)
    int min = tm_struct->tm_min;
    printf("%d:%d\n", hour, min);
    if(hour <12){
        printf("Good Morning!");
}else if(hour >=12 && hour <18){
    printf("Good Afternoon!");
}else{
    printf("Good Evening!");
}
    
    return 0;
}