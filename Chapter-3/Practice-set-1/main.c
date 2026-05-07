#include <stdio.h>

int main()
{
    // Q1: Output of the program below is? Output is: "I am 11"
    //  Reason: The "=" is an assignment operator, hence, the value of a changes to 11, making the condition true and the expression becomes if(11) [Recall: any non-zero value will always evaluate to true].
    int a = 10;
    if (a = 11)
        printf("I am 11");
    else
        printf("I am not 11");

    // Q2: Write a program to find out whether a student is pass or fail; if it requires total 40% and at least 33% in each subject to pass. Assume 3 subjects and take marks as an input from the user
    int maths, physics, programming;
    printf("Enter your maths score: ");
    scanf("%d", &maths);
    printf("Enter your physics score: ");
    scanf("%d", &physics);
    printf("Enter your programming score: ");
    scanf("%d", &programming);

    int total = maths + physics + programming;
    if (total >= 120 && maths >= 33 && physics >= 33 && programming >= 33)
        printf("Congratulations!! You passed...");
    else
        printf("You are failed!!, try again next time!");

    // Q3: Calculate income tax paid by an employee to the government as per stats mentioned below:
    //  Income stats               Tax
    //  2.5L - 5.0L                 5%
    //  5.0L - 10.0L                20%
    //  Above 10.0L                 30%
    // Note that there is no tax below 2.5L. Take income amount as input from the user

    // Q4: Write a program to find whether a year entered by the user is a leap year or not. Take year as an input from the user.

    // Q5: Write a program to determine whether a character entered by the user is lowercase or not

    // Q6: Write a program to find greatest of four numbers entered by the user
    return 0;
}