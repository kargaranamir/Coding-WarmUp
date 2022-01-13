#include <stdio.h>

int string_to_int(char* str_arr)
{
    int result = 0;

    for (int i = 0; str_arr[i] != '\0'; i++)
        result = result * 10 + str_arr[i] - '0';
    return result;
}

void main()
{
    char str_arr[] = "1304";
    int result = string_to_int(str_arr);
    printf("%d ", result);
}