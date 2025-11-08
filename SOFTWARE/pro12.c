#include<stdio.h>
int main ()
{
    int A , B ,C;
    scanf("%d %d %d",&A,&B,&C);
     if(A+B+C==180 && A>0 && B>0 && C>0)
    {
        printf("Valid Triangle");
    }
    else
    {
        printf("Invalid Triangle");
    }


    return 0;
}