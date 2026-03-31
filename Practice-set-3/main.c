#include <stdio.h>

// Program to convert Celsius (Centigrade degrees temperature) to Fahrenheit
int main()
{
    double celsius;

    printf("Enter Celsius temperture: ");
    scanf("%lf", &celsius);

    if (celsius < -273.15)
    {
        printf("Temperature cannot be below abosolute zero!\n");
        return 1;
    }

    double fahrenheit = celsius * 9.0 / 5 + 32;
    printf("Fahrenheit equivalent: %.2lf\n", fahrenheit);
    return 0;
}