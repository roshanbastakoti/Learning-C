#include <stdio.h>

int main () {
     int a ;
     printf ("Enter the age\n") ;
     scanf ("%d", &a) ;

    //  if (a%2 == 0) {

    //      printf ("%d is a even number\n", a);
    //  }

    //  else {

    //      printf ("%d is an odd number\n", a) ;
         
    //  }

    if (a > 18) {

        printf("%d can drive\n", a) ;

    }

    else {
        
        printf("%d cannot drive\n", a) ;

    }
return 0;
}