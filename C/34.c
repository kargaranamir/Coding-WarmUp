#include <stdio.h>

void transpose_3_5 (int matrix [3][5], int (*transpose)[3])
{   
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 5; j++)
            transpose[j][i] = matrix[i][j];
}


void main()
{
    
    int temp[3][5]=
    { 18, 12, 29, 8, 1,
    19, 10, 31, 12, 2,
    20, 7, 31, 15, 7};
    
    int result[5][3];
    
    transpose_3_5(temp, result);
    
    for (int i = 0; i < 5; i++)
    for (int j = 0; j < 3; j++) 
    {
        printf("%d  ", result[i][j]);
        if (j == 3 - 1)
            printf("\n");
    }
    
}