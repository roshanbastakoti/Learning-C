#include <stdio.h>

int main()
{
    int rating;
    printf("Enter your rating for roshan from (0 to 5)\n");
    scanf("%d", &rating);

    switch (rating)
    {
    case 1:
        printf("Your rating is 1 out of 5, you don't like him\n");
        break;

    case 2:
        printf("Your rating is 2 out of 5, why don't you like him?\n");
        break;

    case 3:
        printf("Your rating is 3 out of 5, you are not sure if you like him\n");
        break;

    case 4:
        printf("Your rating is 4 out of 5, you pretty much like him\n");
        break;

    case 5:
        printf("Your rating is 5 out of 5, that's great you should like him\n");
        break;
    default:
        printf("Your rating is invalid\n");
    }

    return 0;
}