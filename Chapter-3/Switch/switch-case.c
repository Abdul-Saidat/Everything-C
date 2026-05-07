#include <stdio.h>

int main()
{
    // Q: Write a program to find grade of a student given his marks based on below:
    // 90 - 100 => A  80 - 90 => B  70 - 80 => C 60 - 70 => D  <70 => F

    int score;
    printf("Enter your score (score must be between 0 and 100): ");
    scanf("%d", &score);
    char grade;

    if (score >= 90 && score <= 100)
        grade = 'A';
    else if (score >= 80 && score <= 89)
        grade = 'B';
    else if (score >= 70 && score <= 79)
        grade = 'C';
    else if (score >= 60 && score <= 70)
        grade = 'D';
    else if (score < 70)
        grade = 'F';
    else
        grade = 'F';

    switch (grade)
    {
    case 'A':
        /* code */
        printf("Excellent");
        break;
    case 'B':
        printf("Very Good");
        break;
    case 'C':
        printf("Good");
        break;
    case 'D':
        printf("Pass");
        break;
    case 'F':
        printf("F");
        break;
    default:
        printf("Invalid grade");
        break;
    }

    return 0;
}