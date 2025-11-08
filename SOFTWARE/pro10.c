#include<stdio.h>
int main()
{
    int basicsalary;
    float grosssalary,HRA,DA,T;
    scanf("%d",&basicsalary);
   
    if(basicsalary<=0)
    {
        printf("Invalid Salary");
    }
    else if(basicsalary<=10000)
    {
        HRA=0.20*basicsalary;
        DA=0.80*basicsalary;
        T=HRA+DA+basicsalary;
        printf("Gross salary : %.2f",T);
    }

     else if(basicsalary>10000 && basicsalary<=20000)
    {
        HRA=0.25*basicsalary;
        DA=0.90*basicsalary;
        T=HRA+DA+basicsalary;
        printf("Gross salary : %.2f",T);
    }

 else if(basicsalary>20000)
    {
        HRA=0.30*basicsalary;
        DA=0.95*basicsalary;
        T=HRA+DA+basicsalary;
        printf("Gross salary : %.2f",T);
    }
return 0;
}