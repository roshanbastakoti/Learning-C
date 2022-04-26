#include <stdio.h>

int main()
{
    int rating;
    printf("Enter your rating from (0 to 5)\n");
    scanf("%d", &rating);

    switch (rating)
    {
    case 1:
        printf("Your rating is 1 out of 5\n");
        break;

    case 2:
        printf("Your rating is 2 out of 5\n");
        break;

    case 3:
        printf("Your rating is 3 out of 5\n");
        break;

    case 4:
        printf("Your rating is 4 out of 5\n");
        break;

    case 5:
        printf("Your rating is 5 out of 5\n");
        break;
    default:
        printf("Your rating is invalid\n");
    }

    return 0;
}