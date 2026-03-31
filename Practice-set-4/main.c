#include <stdio.h>

// Program to calculate Simple Interest

int main()
{
    double principal, years, rate;

    printf("Enter Principal: ");
    scanf("%lf", &principal);

    printf("Enter Number of years: ");
    scanf("%lf", &years);

    printf("Enter Rate (in percent e.g. 5 or 5%%): ");
    scanf("%lf", &rate);
    rate = rate / 100.0;

    if (principal <= 0 || rate <= 0 || years <= 0)
    {
        printf("All values must be positive!\n");
        return 1;
    }

    double SI = principal * rate * years;

    printf("Simple interest is: %.2lf\n", SI);

    return 0;
}