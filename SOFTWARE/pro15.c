#include<stdio.h>
int main()
{
    int C,T;
    scanf("%d %d",&C,&T);
     if(T==0 || T<0) {
        printf("Invalid transaction amount");}

     else if (C==0 || C<0)  {
        printf("Invalid Credit limit");
    }
    else if(T<=C)
    {
        printf("Transaction Approved");
    }
    else {
    printf("Transaction Declined");}

    return 0;

}