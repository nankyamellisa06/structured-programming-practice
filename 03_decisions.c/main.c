
#include <stdio.h>
//exercise4.7

int main(void) {
    int firstNumber = 0;
    int secondNumber = 0;

    printf("Enter two integers: ");
    scanf("%d %d", &firstNumber, &secondNumber);

    if (firstNumber > secondNumber) {
        printf("%d is greater than %d\n", firstNumber, secondNumber);
    } else if (firstNumber < secondNumber) {
        printf("%d is less than %d\n", firstNumber, secondNumber);
    } else {
        printf("The two numbers are equal.\n");
    }

    return 0;
}
