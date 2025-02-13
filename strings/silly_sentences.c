//Gabriel Lopez, Silly sentences on C
#include <stdio.h>
//empty string variables for user words (minimum 3)
char noun[50];
char description[50];
char action_word[50];
char location[50];
char time_of_day[50];

int main(void){
printf("Welcome to the silly sentence generator put in a few words and this program will turn those words into a sentance!");
printf("Please make sure that you only put in one word for your sentance");
printf("Please provide a noun (ex: person or animal)\n");
scanf("%s", noun);
printf("Please provide a description of that noun (ex: yellow, wet, soft)\n");
scanf("%s", description);
printf("Please provide an action (ex: sleeping, shooting, eating)\n");
scanf("%s", action_word);
printf("Please provide a location (ex: Orem, Miami, Dallas)\n");
scanf("%s", location);
printf("Please provide a time of day (ex: noon, midnight, morning)\n");
scanf("%s", time_of_day);
printf("It was %s and %s was going to %s to go %s, but %s was %s so they ended up missing their flight.", time_of_day, noun, location, action_word, noun, description);
return 0;
}