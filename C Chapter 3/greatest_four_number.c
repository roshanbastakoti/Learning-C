#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;
    printf("Enter the first number\n");
    scanf("%d", &num1);

    printf("Enter the second number\n");
    scanf("%d", &num2);

    printf("Enter the third number\n");
    scanf("%d", &num3);

    printf("Enter the forth number\n");
    scanf("%d", &num4);

    if (num1 > num2 && num1 > num3 && num1 > num4)
    {

        printf("%d is the gretest number\n", num1);
    }

    if ((num2 > num1 && num2 > num3 && num2 > num4))
    {

        printf("%d is the gretest number\n", num2);
    }

    if (num3 > num2 && num3 > num1 && num3 > num4)
    {

        printf("%d is the gretest number\n", num3);
    }
    if (num4 > num2 && num4 > num3 && num4 > num1)
    {

        printf("%d is the gretest number\n", num4);
    }

    return 0;
}