#include <stdio.h>

// Program to calculate the area and volume of a circle

int main()
{
    const double PI = 3.14;
    double radius, height;

    printf("Enter radius: ");
    scanf("%lf", &radius);

    if (radius <= 0)
    {
        printf("Radius must be positive!\n");
        return 1; // to stop program if invalid
    }

    double area = PI * radius * radius;
    printf("Cycle area: %.2lf\n", area);

    printf("Enter height: ");
    scanf("%lf", &height);

    if (height <= 0)
    {
        printf("Height must be positive!\n");
        return 1;
    }
    printf("Cylinder volume: %.2lf\n", area * height);

    return 0;
}