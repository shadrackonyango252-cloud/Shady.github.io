#include <stdio.h>

int main() {
    float balance, withdraw;

    printf("Enter your account balance: ");
    scanf("%f", &balance);


    while (balance > 0) {
        printf("\nEnter amount to withdraw: ");
        scanf("%f", &withdraw);

        balance -= withdraw;

        if (balance > 0) {
            printf("Remaining balance: %.2f\n", balance);
        } else {
            printf("Balance is now zero or negative (%.2f). No more withdrawals allowed.\n", balance);
        }
    }

    printf("Transaction ended.\n");
    return 0;
}
