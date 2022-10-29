// 8. Write a C program to print Fibonacci series up to n terms. (use only for-loop, not using
// recursion for now)

#include <stdio.h>
void fibSeries(unsigned long long int n);
void main()
{
    unsigned long long int n;
    printf("Enter a number(n):\n ");
    scanf("%llu", &n);

    printf("Fibonacci series upto %llu terms are: ", n);
    fibSeries(n);
}

void fibSeries(unsigned long long int n)
{
    unsigned long long int x = 0, y = 1, z = 0, i;
    printf("%llu, %llu, ", x, y);

    for (i = 1; i <= (n - 2); i++)
    {

        z = x + y;

        printf("%llu", z);
        x = y;
        y = z;
        if (i < (n - 2))
            printf(", ");
        else if (i == (n - 2))
            printf(".");
    }
}
/* algo - for 8 terms
0, 1, 1, 2, 3, 5, 8, 13

1. define 3 variables- x= 0 , y=1, z=0
2. print value of x and y
3. loop through 1 to n
4. z=x+y
5. print value of z
6. x=y
7. y=z */