#include <stdio.h>

int main() {
    int choice;


    printf("Available Internet Bundles:\n");
    printf("1. 100MB  = Ksh 50\n");
    printf("2. 500MB  = Ksh 200\n");
    printf("3. 1GB    = Ksh 350\n");
    printf("4. 2GB    = Ksh 600\n");


    printf("\nEnter your choice (1-4): ");
    scanf("%d", &choice);


    switch (choice) {
        case 1:
            printf("You selected 100MB bundle. Cost: Ksh 50\n");
            break;
        case 2:
            printf("You selected 500MB bundle. Cost: Ksh 200\n");
            break;
        case 3:
            printf("You selected 1GB bundle. Cost: Ksh 350\n");
            break;
        case 4:
            printf("You selected 2GB bundle. Cost: Ksh 600\n");
            break;
        default:
            printf("Invalid choice! Please select between 1 and 4.\n");
    }

    return 0;
