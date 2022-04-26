#include <stdio.h>

int main () {
     int year ;
     printf ("Enter the year\n");
     scanf ("%d", &year);
     if (year % 400 == 0 ){

         printf ("The given year is a leap year\n");
     }

     else if (year % 4 == 0) {
         printf ("This year is a leap year\n");
     }

     else {
         printf ("This is not a leap year\n");
     }
return 0;
}   