#include <stdio.h>
int main() 
{
 int a, b, result;
 printf("Enter a number:\n");
 scanf("%d", &a);
int i=1;

while(i<10)
{
    i++;
    printf("%d * %d = %d \n", a, i, a*i);
} 

return 0;
}