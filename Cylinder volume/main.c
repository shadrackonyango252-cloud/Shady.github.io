#include <stdio.h>
#include <stdlib.h>

int main()
{
    double radius;
    int height;
    const double PI = 3.142;

    // Prompt user for radius
    printf("Enter radius: ");
    scanf("%lf", &radius);  // Use %lf for double

    // Prompt user for height
    printf("Enter height: ");
    scanf("%d", &height);

    // Calculate volume and surface area
    double volume = PI * radius * radius * height;
    double area = (2 * PI * radius * radius) + (2 * PI * radius * height);

    // Output results
    printf("Volume of the cylinder: %.2f\n", volume);
    printf("Surface area of the cylinder: %.2f\n", area);

    return 0;
}
