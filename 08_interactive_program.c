#include <stdio.h>
//exercise 4.

int main(void) {
    double hoursWorked = 0.0;
    double hourlyRate = 0.0;
    double grossPay = 0.0;

    printf("Enter hours worked (-1 to end): ");
    scanf("%lf", &hoursWorked);

    while (hoursWorked != -1) {
        printf("Enter hourly rate: ");
        scanf("%lf", &hourlyRate);

        if (hoursWorked <= 40) {
            grossPay = hoursWorked * hourlyRate;
        } else {
            grossPay = (40 * hourlyRate) +
                       ((hoursWorked - 40) * hourlyRate * 1.5);
        }

        printf("Gross pay is $%.2f\n\n", grossPay);

        printf("Enter hours worked (-1 to end): ");
        scanf("%lf", &hoursWorked);
    }

    printf("Program ended.\n");

    return 0;
}
