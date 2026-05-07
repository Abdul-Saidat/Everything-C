#include <stdio.h>

int main(void)
{

    // Q1: Which of the following is invalid in C?
    // int a;
    // b = a;
    int v = 3 ^ 3;
    // char dt = '21 Dec 2020';

    // answer is the first third expression: first one is invalid because b is undeclared, third one makes use of invalid character literal/wrong use of char

    // Q2: What data type will 3.0/8 - 2 return?
    // Answer: it will return a double

    printf("%.3lf\n", 3.0 / 8);

    // Q3: Write a program to check whether a number is divisible by 97 or not
    // int input;
    // printf("Enter a number: ");
    // scanf("%d", &input);
    // if (input == 0)
    // {
    //     printf("Number must be greater than 0");
    //     return 0;
    // }
    // if (input % 97 == 0)
    // {
    //     printf("Number is divisible by 97!!");
    // }
    // else
    // {
    //     printf("Number isn't divisible by 97!!");
    // }
    // return 0;

    // Q4: Explain step by step evaluation of 3 * x/y - Z + R. Where x = 2, y = 3, Z = 3, R = 1
    int x = 2, y = 3, Z = 3, R = 1;

    float evaluation = 3 * (x / y) - Z + R;
    printf("Evaluation: %f\n", evaluation);

    // Q5: 3.0 + 1 will be? Answer: Floating point number if printed with %f

    printf("%f", 3.0 + 1);
}
