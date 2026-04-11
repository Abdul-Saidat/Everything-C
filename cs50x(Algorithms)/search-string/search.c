#include <stdio.h>
#include <string.h>

int main(void)
{
    char strings[] = {'battleship', 'boot', 'cannon', 'iron', 'thimble', 'top hat'};

    char s;
    printf("What string are you looking for: ");
    scanf("%c", s);
    for (int i = 0; i < 6; i++)
    {
        if (strings[i] == s)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}