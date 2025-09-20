#include <stdio.h>

int main() {
    int age;
    double income;

    // Prompt the user for age
    printf("Welcome to ABC Bank Loan Services!\n");
    printf("Please enter your age: ");
    scanf("%d", &age);

    // Prompt the user for income
    printf("Please enter your annual income in Ksh: ");
    scanf("%lf", &income);

    if (age >= 21 && income >= 21000) {
        printf(" Congratulations! You qualify for a loan.\n");
    } else {
        printf(" Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}

