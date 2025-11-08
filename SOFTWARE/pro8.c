#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x<0)
    {
        printf("Order has no proper quantity specified.\n Thank YOU!");
        return 0;
    }
    else if(x>0 && x<70)
    {
        printf("Order confirmed.\n Thank YOU!");
        return 0;
    }
    else
    {
        printf("Order Limit Reached.\n Thank YOU!");
    }

    return 0;
}