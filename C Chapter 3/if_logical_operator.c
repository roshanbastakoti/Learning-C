#include <stdio.h>

int main()
{
    int age;
    printf("Enter the age\n");
    scanf("%d", &age);

    if (age <= 70 && age >= 18)
    {

        printf("You are above 18 or below 70, You can drive.\n");
    }

    else
    {

        printf("You are below 18 or above 70, You cannot drive.\n");
    }

    return 0;
}