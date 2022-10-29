// 6. Write a C program to find HCF (GCD) of two numbers.

#include <stdio.h>

int findHCF(int a, int b); //declaring function - prototype

void main()

{
    int x,y, result;
    printf("Enter two number: ");
    scanf("%d,%d" ,&x ,&y);

    result=findHCF(x, y); // recieving value to hcf variable
    printf("HCF: %d" ,result);
 
}


int findHCF(int a, int b)
{
    int hcf;
    for(int i=1; i<=a  || i<=b; i++) {
        if (a%i ==0 && b%i ==0) 
        {
        hcf=i;   
        }
        
    }
    return hcf;
}

/* algo used- for instance if we had to find hcf of 2 and 4
factors of two are 2,1
factors of four are 2,1
common factor is two : it is the highest factor of the least number out of the given nums- lower power of each common factor*/

