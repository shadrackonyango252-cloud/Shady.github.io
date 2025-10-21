#include <stdio.h>

float calculateFare(float distance) {
    float ratePerKm = 50.0;   // Fare rate per kilometer
    float totalFare = distance * ratePerKm;
    return totalFare;
}

int main() {
    float distance, fare;

    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);

    fare = calculateFare(distance);
    printf("Total fare: KSh. %.2f\n", fare);

    return 0;
}
