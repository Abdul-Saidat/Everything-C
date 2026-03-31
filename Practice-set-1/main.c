#include <stdio.h>
// Program to calculate the area of a rectangle:
// Method 1: Hardcoded values
// Method 2: User input

int main()
{
    // Hardcoded
    int l1 = 5, b1 = 6;
    printf("Hardcoded area: %d\n", l1 * b1);

    //   User input
    int length, breadth;
    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter breadth ");
    scanf("%d", &breadth);

    printf("User input area: %d\n", length * breadth);

    return 0;
}
