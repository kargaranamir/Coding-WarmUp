/*

The question is ambigous, if the two string are not equal we should return the difference of first character values.
so what will happen if the two variables has different strings and the same first character values. 

Edit:
I will return the difference of first charcter values that are not the same in both strings.
*/

#include <stdio.h>

int compare_string(char* str1, char* str2)
{
    for (int i = 0; ; i++)
    {
    
        if (str1[i] == str2[i])
        {
            
            if (str1[i] == '\0' && str2[i] == '\0')
            {
                return 0;
            }
            else
                continue;
        }
        
        else
            return str2[i] - str1[i];
    }
}

void main()
{
    char str1[] = "ana";
    char str2[] = "bna";
    char str3[] = "anac";
    char str4[] = "and";
    
    
    int result = compare_string(str1, str1);
    printf("compare (%s, %s) is: %d\n", str1, str1, result);
    
    
    result = compare_string(str1, str2);
    printf("compare (%s, %s) is: %d\n", str1, str2, result);
    
    result = compare_string(str2, str1);
    printf("compare (%s, %s) is: %d\n", str2, str1, result);
    
    result = compare_string(str1, str3);
    printf("compare (%s, %s) is: %d\n", str1, str3, result);
    
    result = compare_string(str3, str1);
    printf("compare (%s, %s) is: %d\n", str3, str1, result);
    
    result = compare_string(str1, str4);
    printf("compare (%s, %s) is: %d\n", str1, str4, result);
    
    result = compare_string(str4, str1);
    printf("compare (%s, %s) is: %d\n", str4, str1, result);
}