#include<stdio.h>
//The function to reduce the function.
void reduce ( int numerator, int denominator, int * reduce_numerator, int * reduce_denominator);
//The function to find the GCD of two integers.
int gcd( int a, int b );

int main(void)
{
    int A,B;
    int *a=&A, *b=&B;
    printf("Enter a fraction: ");
    scanf("%d/%d", a, b);
    reduce(A,B,a,b);
    //If B is 1, then it's not a fraction anymore.
    if(B!=1)printf("In lowest terms: %d/%d", A, B);
    if(B==1)printf("In lowest terms: %d", A);
}

int gcd( int a, int b )
{
    //I'm lazy so i write this function in a recursive way.
    if ( a==0 ) return b;
    return gcd( b%a, a );
}

void reduce ( int numerator, int denominator, int * reduce_numerator, int * reduce_denominator)
{
    //Hi.
    *reduce_numerator/=gcd(numerator,denominator);
    *reduce_denominator/=gcd(numerator,denominator);
}
