#include <stdio.h>
void findPrime(int n);
void main()

{
    int n;

    printf("Enter value of n : ");
    scanf("%d", &n);

    printf("Prime numbers between 1 to %d are: ", n);
    findPrime(n);
}

void findPrime(int n)
{
    int i, j, variableflag;
    for (i = 2; i <= n; i++) // i from-we want to avoid 1 as it is neither prime nor composite.
    {
        variableflag = 0;
        for (j = 2; j <= i / 2; ++j)
        {
            if (i % j == 0)
            {
                variableflag = 1;
                break;
            }
        }
        if (variableflag == 0)

            printf("%d\t", i);
    }
}