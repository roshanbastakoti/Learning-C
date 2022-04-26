#include <stdio.h>

int main()
{
    int i;
    printf("Enter the value of i\n");
    scanf("%d", &i);

    while (i <= 20)
    {
        if (i >= 10)
        {
            printf("The value of i is %d\n", i);
        }

        i++;
    }

    return 0;
}

// Write a program to print natural numbers from 10 to 20 when the initial loop counter i is initialized to 0.

// The loop counter need not be int, it can be a float as well.