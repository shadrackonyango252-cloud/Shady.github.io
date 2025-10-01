#include <stdio.h>

int main() {
    int units;
    float bill;


    printf("Enter the number of water units consumed: ");
    scanf("%d", &units);


    if (units <= 30) {
        bill = units * 20.0;
    }
    else if (units <= 60) {
        bill = (30 * 20.0) + ((units - 30) * 25.0);
    }
    else {
        bill = (30 * 20.0) + (30 * 25.0) + ((units - 60) * 30.0);
    }


    printf("Total water bill = Ksh. %.2f\n", bill);

    return 0;
}

