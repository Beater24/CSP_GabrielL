// Gabriel Lopez, My family loop on C

#include <stdio.h>

int main(void){
    char family_members[][20] = {"Rodrigo", "Fransen", "Rodrigo A.", "Gabriel"};
    
    int tlength = sizeof(family_members)/sizeof(family_members[0]);
    int m;
    for(m=0;m<tlength;m++){
        printf("Hello, %s\n", family_members[m]);
    }

    return 0;
}