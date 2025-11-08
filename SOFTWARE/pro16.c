#include<stdio.h>
int main()
{
    int P,Q,T;
    float D,A;
    scanf("%d %d",&P,&Q);
    T=P*Q;
    if(P>0 && Q>=1)
    {
       if(T % 2==0){
        A=T-0.1*T;
      printf("A=%.2f",A);}
    else if(T % 2!=0)
    {
        A=T-0.15*T;
        printf("A=%.2f",A);}
    }
     else if (P==0 && Q==0 ||P<0&&Q<0)
    {printf("Invalid price and quantity");}
    else if (P<=0)
    {printf("Invalid price");}
    else if (Q<=1)
    {printf("Invalid quantity");}
    
    return 0;
}