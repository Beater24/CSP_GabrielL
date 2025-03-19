// Gabriel Lopez, FizzBuzz on C

#include <stdio.h>
#include <math.h>

int main(void) {
    int q;
    for (q = 1; q < 51; q++) {
        if (q % 3 == 0 && q % 5 == 0) {
            printf("FizzBuzz\n");
        } else if (q % 3 == 0) {
            printf("Fizz\n");
        } else if (q % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", q);
        }
    }
    return 0;
}