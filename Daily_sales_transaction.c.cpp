#include <stdio.h>

int main() {
    FILE *file;
    float amount, total = 0.0;

    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file sales.txt\n");
        return 1;
    }

    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    fclose(file);

    printf("Total sales for the day: %.2f\n", total);

    return 0;
}
