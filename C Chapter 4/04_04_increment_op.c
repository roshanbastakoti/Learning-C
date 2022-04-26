#include <stdio.h>

int main () {
     int i = 1 ;
     printf ("The value of i++ is %d\n", ++i) ;
     printf ("The value of ++i is %d\n", i++);

    //  i++---> first print then increment
    //  ++i---> first increment than print
    // += something --> increase the value by something 
  i+= 10 ; 
  printf ("The value of i is %d\n", i) ;



return 0;
}