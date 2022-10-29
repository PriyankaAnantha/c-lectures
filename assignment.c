// 5. Write a C program to find all factors of a number.

// 6. Write a C program to find HCF (GCD) of two numbers.
// 7. Write a C program to print all Prime numbers between 1 to n.

// 8. Write a C program to print Fibonacci series up to n terms. (use only for-loop, not using
// recursion for now)


#include <stdio.h>
int findHCF(int a, int b);
void findFactors(int num); //declaring function - prototype
void main()

{
    int x,y, result;
    printf("Enter two number: ");
    scanf("%d,%d" ,&x ,&y);

    result=findHCF(x, y); // recieving value to hcf variable
    printf("HCF: %d" ,result);
 
//int num;
// printf("Enter a number: ");
// scanf("%d" ,&num );
// findFactors(num);
}
void findFactors(int num) //definition of a funtion
{
    printf("Factors: ");
for(int i=1; i<=num; i++){
    if(num%i ==0) {
        printf("%d,\t", i);
    }
}
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

/* algo for 6- find hcf of 2 and 4
factors of two are 2,1
factors of four are 2,1
common factor is two : it is the highest factor of the least number out of the given nums- lower power of each common factor*/

