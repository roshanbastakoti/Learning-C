#include <stdio.h>

int main()
{
    int age;
    printf("Enter the age\n");
    scanf("%d", &age);

    if (age > 70)
    {

        printf("you are above 70, you cannot drive\n");
    }

    else
    {

        printf("you are below 70, you can drive \n");
    }

    if (age == 60)

    {

        printf("Half Century\n");
    }

    return 0;
}