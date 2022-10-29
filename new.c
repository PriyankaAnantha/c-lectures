#include <stdio.h>
void main()
{
    int T;
    scanf("%d",&T);
    
    for (T; T>0; T--)
    {
        int A, B;
        scanf("%d %d",&A,&B);
        printf("%d\n",(A+B));
    }
}