#include <stdio.h>
#include <string.h>

// DATA STRUCTURES

typedef struct
{
    char name[50];
    char number[20];
} person;

// using normal arrays
int function1()
{
    char *names[] = {"Kelly", "David", "John"};
    char *numbers[] = {"091-6590-0264", "092-6757-8899", "080-8101-2111"}; // using strings for the numbers because they contain non-numbers(other characters)

    char name[10];
    printf("Enter name: ");
    scanf("%9s", name);

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found");
    return 1;
}

// The implementation above works, but what if we have a phonebook with hundreds and thousands of names and numbers?
// An alternative when you want to store related keywords in C is:
// typedef struct // this defines a new type that is a data structure
// {
//     char name[50];
//     char number[20];
// } person; // name you want to give the new custom type
// invent a new data type called person and assume that every person in the worls has a name and a number
// }

// using the structure defined above
int function2()
{
    person people[3];  // an array called people 
    
    strcpy(people[0].name, "Kelly");
    strcpy(people[0].number, "091-6590-0264");

    strcpy(people[1].name, "David");
    strcpy(people[1].number, "092-6757-8899");

    strcpy(people[2].name, "John");
    strcpy(people[2].number, "080-8101-2111");

     char name[10];
    printf("Enter name: ");
    scanf("%9s", name);

    for (int i = 0; i < 3; i++)
    {
        if(strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found");
    return 1;
}

int main(void)
{
    return
    //  function1();
     function2();

}
