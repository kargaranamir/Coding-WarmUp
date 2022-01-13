#include <stdio.h>

int lucas(int n) 
{ 
    // base case 
    if (n == 0) 
        return 2; 
    if (n == 1) 
        return 1; 

    // recursive step
    return lucas(n - 1) + lucas(n - 2); 
} 

void main() 
{ 
    int x;
    
    printf( "Enter one integer: " );
    scanf( "%d", &x );
    printf( "The result is %d\n", lucas( x ) ); 
}
