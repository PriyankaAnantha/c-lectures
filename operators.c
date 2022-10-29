#include <stdio.h>
void main()
{
    int x=2 , y=3;
    int a=0 , b=0;

    printf("x=%d, a=%d\n", x, a);
   // a=x;
    //printf("x=%d, a=%d\n", x, a);

    a=++x;
    // a=x=x+1

    b=x++;
    // b=x x=x+1
    printf("x=%d, a=%d\n", x, a);

}