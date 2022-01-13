/*

deciding an array size at runtime is possible in modern C (>= C99) and code like the below is fine,
however if you use the ancient compilers you should use malloc function and the code would be like this (dont forget to include stdlib.h):
int arr [size] -> int *arr = malloc(sizeof(int) * size)

arr [i] -> &arr [i]: you should pass the variable address when calling scanf
i -> int i: You should define the variable.
i=1, i<=size -> i=0, i<size : the array index starts from 0 to size-1
%d -> %d \n: for a better show in print 

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{

    int size;
    scanf ( "%d", &size );
    // int *arr = malloc(sizeof(int) * size);
    int arr [size]
    
    for (int i=0 ; i < size ; i++ )
    {
        scanf ( "%d", &arr[i] );
        printf ( "%d \n", arr[i] );
    }


}