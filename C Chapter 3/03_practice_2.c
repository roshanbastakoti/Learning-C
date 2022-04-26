#include <stdio.h>

int main()
{
    int maths, science, social ;
    float total ;
    printf ("Enter your marks in maths\n");
    scanf ("%d", & maths);
    
    printf ("Enter your marks in science\n");
    scanf ("%d", & science);

    printf ("Enter your marks in social\n");
    scanf ("%d", & social);

    total = (maths + science + social)/3 ;

    if ((total < 40) || maths <33 || social < 33 || science < 33 )        
     {
        printf (" Your total percentage is %f and you are fail\n", total) ;
    }

    else {
        printf ("You total percentage is %f and you are pass\n", total) ;
    }






    return 0;
}