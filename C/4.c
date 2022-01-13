/*

The Program Function is Multiplication:

It adds x to itself y times, 
mystery is a recursive function that add a to it self b times and when b 
is equal to 1 then it terminates with adding the last a.

a + a + a + a + ... (b times) = a * b

for example: mystery(3, 5) = 15

*/


#include <stdio.h>
#include <conio.h>
int mystery( int a, int b );

void main()
{   
    int x;
    int y;

    printf( "Enter two integers: " );
    scanf( "%d%d", &x, &y );
    printf( "The result is %d\n", mystery( x, y ) );
}

// Parameter b must be a positive integer to prevent infinite recursion
int mystery( int a, int b )
{
    if (b == 1) // base case
        return a;
    else // recursive step
        return a + mystery( a, b - 1 );
}