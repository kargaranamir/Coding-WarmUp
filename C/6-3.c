#include<stdio.h>

typedef struct Complex
{
    float real;
    float imag;
} complex;


complex multiplication (complex c1, complex c2) 
{   
    complex result;
    
    result.real = c1.real * c2.real - c1.imag * c2.imag;
    result.imag = c1.real * c2.imag + c2.real * c1.imag;
    
    return result;
}


void conjugate (complex *a) 
{
     a->imag = -1.0 * a->imag; 
}

int main()
{
    complex c1, c2, result;

    printf("1st number:\n");
    printf("enter real part:\n");
    scanf("%f", &c1.real);
    printf("enter imag part:\n");
    scanf("%f", &c1.imag);

    printf("2nd number:\n");
    printf("enter real part:\n");
    scanf("%f", &c2.real);
    printf("enter imag part:\n");
    scanf("%f", &c2.imag);

    result = multiplication(c1, c2); 
    printf("multiplication result is: (%f, %fj)\n", result.real, result.imag);
    conjugate(&c1);
    printf("conjugate of 1st number result is: (%f, %fj)\n", c1.real, c1.imag);

}