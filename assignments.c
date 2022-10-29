// TA session 25 october assignment problems solved.

#include <stdio.h>
void findFactors();
void findHCF();
void findPrime();
void fibSeries();

void main()
{
    int n;

    do
    {

        printf("\nSelect an option from the list:\n");

        printf("5. Program to find all factors of a number.\n");
        printf("6. Program to find HCF (GCD) of two numbers.\n");
        printf("7. Program to print all Prime numbers between 1 to n.\n");
        printf("8. Program to print Fibonacci series up to n terms.\n");
        printf("0. Enter 0 to quit.\n");
        scanf("%d", &n);
        switch (n)
        {
        case 5:
            findFactors();
            break;
        case 6:
            findHCF();

            break;
        case 7:
            findPrime();

            break;
        case 8:
            fibSeries();
            break;

        default:
            break;
        }

    } while (n != 0);
}


/*
 * Q5-Solution to find factors of a given number.
 */
void findFactors()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors: ");
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d,\t", i);
        }
    }
}


/*
 * Q6-Solution to find hcf of a given numbers.
 */
void findHCF()
{
    int hcf, a, b;
    printf("Enter two number: ");
    scanf("%d", &a);
    scanf("%d", &b);

    for (int i = 1; i <= a || i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    printf("HCF: %d\n", hcf);
}


/*
 * Q7-Solution to find all prime numbers between 1 to n.
 */
void findPrime()
{
    int i, j, flag, n;
    printf("Enter value of n : ");
    scanf("%d", &n);

    printf("Prime numbers between 1 to %d are: ", n);

    for (i = 2; i <= n; i++) // i from 2 -to avoid 1 as it is neither prime nor composite.
    {
        flag = 0;
        for (j = 2; j <= i / 2; ++j)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)

            printf("%d\t", i);
    }
}


/*
 * Q8-Solution to find fibonacci series upto n terms.
 */
void fibSeries()
{
    unsigned long long int x = 0, y = 1, z = 0, i;

    unsigned long long int n;
    printf("Enter a number(n):\n ");
    scanf("%llu", &n);

    printf("Fibonacci series upto %llu terms are: ", n);
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
            printf(".\n");
    }
}
