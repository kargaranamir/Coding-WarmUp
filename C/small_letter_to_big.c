#include <stdio.h>
#include <string.h>


char* small_to_big(char* str_arr)
{

    for (int i = 0; str_arr[i] != '\0'; i++)
        if ('a' <= str_arr[i]  && str_arr[i] <= 'z')
            str_arr[i] = str_arr[i] + 'A' - 'a' ;
    
    return str_arr;
}

void main()
{
    char str_arr[] = "aghfkagAFGFA1343543AFFAH";
    strcpy(str_arr, small_to_big(str_arr));
    printf("%s ", str_arr);
}