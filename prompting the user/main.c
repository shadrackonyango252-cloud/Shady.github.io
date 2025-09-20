
//Name: Ouma Shadrack Onyango
//Reg No: PA106/G/28794/25



#include <stdio.h>

int main() {
    int height;
    int id_number;
    double account_balance;

    // Accept user input
    printf("Enter your Height: ");
    scanf("%d", &height);

    printf("Enter your ID No: ");
    scanf("%d", &id_number);

    printf("Enter your bank balance: ");
    scanf("%1f", &account_balance);

    // Display the results
    printf("\n--- User Details ---\n");
    printf("Height: %d\n", height);
    printf("ID Number: %d\n", id_number);
    printf("Bank Balance: %d\n", account_balance);

    return 0;
}
