#include <stdio.h>

int integerPower(int base, int exponent) {
    if (exponent != 0)
        return (base * integerPower(base, exponent - 1));
    else
        return 1;
}

void main()
{
    int x;
    int y;
    
    printf( "Enter two integers: " );
    scanf( "%d%d", &x, &y );
    printf( "The result is %d\n", integerPower( x, y ) );
}
