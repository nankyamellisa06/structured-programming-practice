
#include <stdio.h>

int main(void) {
    int firstNumber = 0;
    int secondNumber = 0;
    int thirdNumber = 0;
    int product = 0;

    printf("Enter three integers: ");
    scanf("%d %d %d", &firstNumber, &secondNumber, &thirdNumber);

    product = firstNumber * secondNumber * thirdNumber;

    printf("The product is %d\n", product);

    return 0;
}
