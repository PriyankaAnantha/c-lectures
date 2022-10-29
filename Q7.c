// 7. Write a C program to print all Prime numbers between 1 to n.
#include <stdio.h>

void findPrime(int n);

void main()

{
    int n, a;
    printf("To find prime numbers between 1 to: ");
    scanf("%d" ,&n);
 
    
    findPrime(n);
    printf("Prime numbers between 1 to %d are: " ,n);




}


void findPrime(int n)
{
    int i, a;
	for (i=2; i<=n; i++){
        a=0;
        for (int j=1; j<=n/2; j++)
        {
         if (i%j==0)
           {
            a++;
            break;
            
           }
        }
        if (a==2)
        printf("%d" ,i);       
    }

}

/* algo- a number is prime- if its factors are 1 and number itself*/
