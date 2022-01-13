/*

xPtr is not defined as a pointer, You can define it as a poiter like this:
float xPtr -> float * xPtr
and then assign the address of x to it:
xPtr = &x
and also change the print function to print the value that xPtr pointed to it:
printf( "%f\n", xPtr ) -> printf( "%f\n", * xPtr );


OR:
Remove the & operator from x:
float xPtr = x

*/


#include <stdio.h>

int main()
{

    float x = 19.34;
    float * xPtr;
    xPtr = &x;
    printf( "%f\n", * xPtr );

    // OR :
    
    /*
    float x = 19.34;
    float xPtr = x;
    printf( "%f\n", xPtr );
    */
}