/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Division of 2 Numbers (Integral Input)
#include <stdio.h>
int main ()
{
    int A, B;
    double quotient=0;
    printf("Enter 2 Numbers A and B: \n");
    scanf("%d%d", &A, &B);
    quotient= (double)A/B;
    printf("The value of A/B is: %.2lf", quotient);
    return 0;
}


