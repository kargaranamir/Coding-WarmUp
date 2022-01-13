/*

I dont know what the program wants to do but
integerPtr = realPtr -> * integerPtr = * realPtr: the value of pointers can be assigned to each other 
*/


#include <stdio.h>

int main()
{

    float *realPtr;
    long *integerPtr;
    * integerPtr = * realPtr;
    
}
