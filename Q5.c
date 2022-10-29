// 5. Write a C program to find all factors of a number.


#include <stdio.h>

void findFactors(int num); //declaring function - prototype

void main()

{
 
int num;
printf("Enter a number: ");
scanf("%d" ,&num );
findFactors(num);

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
