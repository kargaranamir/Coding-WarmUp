#include <stdio.h>

void mean_sd(int matrix [7][4], float *mean_state, float *mean_day)
{   
    int sum = 0;
    
    for (int i=0; i<4; i++)
    {   
        sum = 0;
        for (int j=0; j<7; j++)
        {
            sum = matrix[j][i] + sum;
        }
        
        mean_state[i] = (float) sum/7.0;
    }

    for (int i=0; i<7; i++)
    {   
        sum = 0;
        for (int j=0; j<4; j++)
        {
            sum = matrix[i][j] + sum;
        }
        
        mean_day[i] = (float) sum/4.0;
    }

}


void main()
{
    
    int temp[7][4]=
    { 18, 12, 29, 8,
    19, 10, 31, 12,
    20, 7, 31, 15,
    22, 4, 27, 19,
    18, -2, 28, 20,
    17, -5, 25, 15,
    15, 0, 22, 11};
    
    float mean_state [4];
    float mean_day [7];
    
    mean_sd(temp, mean_state, mean_day);
    
    for (int i = 0; i < 4; i++)
        printf("mean state of index %d is: %f \n", i, mean_state[i]);

    printf("\n");
    
    for (int i = 0; i < 7; i++)
        printf("mean day of index %d is: %f \n", i, mean_day[i]);



}