/* algo
1. declare variable n for how many lines of tree is needed, n=0
2. print to take input
3. read input
4. loop variable n

*/

#include <stdio.h>
void main()
{
    int n, i, j;
    printf("Number for lines of tree: ");
    scanf("%d", &n);
    // for (i = 1; i <= n; i++)
    // {

    //     for (j = 1; j <= i; j++)
    //     {

    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // for (i = n; i >= 1; --i)
    // {
    //     for (j = i; j >= 1; --j)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j <= n-i; j++)
    //     {
    //         printf(" ");
    //     }

    //     for (j = 1; j <= 2 * i - 1; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    for (i = n; i >= 1; i--)
    {
        for (j = n - i; j >=1 ; j--)
        {
            printf(" ");
        }

        for (j = 2 * i - 1; j >=1 ; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
//contributor- Jithin