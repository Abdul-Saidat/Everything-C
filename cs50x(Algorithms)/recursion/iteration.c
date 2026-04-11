#include <stdio.h>
// Iteration: using loops to solve a problem

void draw(int n);

int main(void)
{
    int height;
    printf("Height: ");
    scanf("%d", &height);

    draw(height);
}

// void draw(int n)
// {
//     // For each row of pyramid
//     for (int i = 0; i < n; i++)
//     {
//         // For each column of pyramid
//         for (int j = 0; j < i + 1; j++)
//         {
//             printf("#");
//         }
//         printf("\n");
//     }
// }


// with recursion
void draw(int n)
{
    if (n <= 0)
        return;
    // Print a pyramid of height n-1
    draw(n - 1);

    // Print one more row
    for (int i = 0; i < n; i++)
    {

        printf("#");
    }
    printf("\n");
}