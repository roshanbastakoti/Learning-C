#include <stdio.h>

int main () {
     char c ;
     printf ("Enter the character\n");
     scanf ("%c", &c);
    
    if (c >= 91 && c<=122){
        printf ("The given character is lowercase\n");
    
    }

    else {
        printf ("The given character is not lowercase\n");
    }
return 0;
}