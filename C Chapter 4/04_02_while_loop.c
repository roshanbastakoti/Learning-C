#include <stdio.h>

int main()
{
    int i;
    printf("Enter the value of i\n");
    scanf("%d", &i);
   
    while (i < 10)
    {

        printf("%d\n", i);

        i++;
    }

    return 0;
}
