#include <stdio.h>

int main()
{
    int a;
    printf("Enter a\n");
    scanf("%d", &a);


    (a < 5) ? printf("A is less than 5\n") : printf("A is more than 5\n");
    
    return 0;
}