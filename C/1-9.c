/*

A void *pointer cannot be dereference and we can not use pointer ariphmetic on void pointers.
void *genericPtr = numPtr -> void *genericPtr = numPtr

*/


#include <stdio.h>

int main()
{

    short *numPtr, result;
    short *genericPtr = numPtr;
    result = *genericPtr + 7; 
}
