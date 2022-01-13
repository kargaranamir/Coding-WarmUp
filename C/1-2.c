/*

$d -> %d  ($d is not correct)

a [3] has 3 values a[0], a[1], a[2], however the objective of this code is not determined 
and compiler can compile and print a[3] , but it does not make sense, so i changed it. 

*/



#include <stdio.h>

int main()
{

    //Assume: 
    int a[ 3 ];
    printf( "%d %d %d\n", a[ 0 ], a[ 1 ], a[ 2 ] );

}
