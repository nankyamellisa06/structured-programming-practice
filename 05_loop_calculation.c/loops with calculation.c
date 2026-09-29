
#include <stdio.h>
//exercise 4.11 chapter4

int main(void) {
    int sum = 0;

    for (int number = 7; number <= 100; number += 7) {
        sum += number;
    }

    printf("The sum of multiples of 7 from 1 to 100 is %d\n", sum);

    return 0;
}
