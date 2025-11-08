#include<stdio.h>
int main()
{
    float sbase,sbonus,sallowance,expenses,stotal,savings;
    float P;
    scanf("%f %f %f %f",&sbase,&sbonus,&sallowance,&expenses);
    stotal=sbase+sbonus+sallowance;
    savings=stotal-expenses;
    P=savings/stotal*100;
    if(sbonus<0 || sallowance<0)
    {
        stotal=sbase;
        savings=stotal-expenses;
        printf("stotal=%.0f\n",sbase);
        printf("savings=%.0f\n",savings);
        printf("P=%.1f%%",P);
    }
    else if(sbonus==0 && sbase==0 && sallowance==0 && expenses==0)
    {
        printf("stotal=%.0f\n",sbase);
        printf("savings=%.0f\n",savings);
        printf("P=undefined");}
    else 
    {
        printf("stotal=%.0f\n",stotal);
        printf("savings=%.0f\n",savings);
        printf("P=%.2f%%",P);
    }  
    return 0;

}