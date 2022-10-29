#include <stdio.h>
int recursion(int n);

 void main()
 {
   int a, b;
   printf("Enter a number: ");
   scanf("%d" , &a);

   b=recursion(a);

   printf("%d" ,b);

 }

 int recursion(int n)
{
    if(n==0)
    {
        return 0;

    }
    else if(n==1)
    { 
        return 1;
    
    }
    else 
    {
        return n*recursion(n-1);
    }
}

//recursion - no loops, 