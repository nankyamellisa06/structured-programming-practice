
#include <stdio.h>
//exercise 3.22 chapter 3

int main(void) {
    int number = 0;
    int isPrime = 1;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 2) {
        isPrime = 0;
    } else {
        for (int divisor = 2; divisor <= number / 2; divisor++) {
            if (number % divisor == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
