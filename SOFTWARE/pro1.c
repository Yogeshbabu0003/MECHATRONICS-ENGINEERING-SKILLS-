#include<stdio.h>
int main()
{
    int Salary;
    char Gender;
    float Bonus;
    scanf("%d %c",&Salary,&Gender);
    if(Gender!='M' && Gender!='F')
    {
        printf("Gender Should be 'M' for male and 'F' for female");
        return 0;
    }
    else if (Salary<0)
    {
        printf("Bonus = Rs. 0 (Invalid salary, no bonus)");
    }
    
    else if (Salary==0)
    {
        printf("Bonus = Rs. 0 (No bonus for zero salary)");
    }
    else if(Salary>0 && Salary<25000)
    {
        printf("Bonus = Rs. 5000");
        return 0;
    }
     else if(Salary>=25000 && Salary<50000)
    {
        printf("Bonus = Rs. 7500");
        return 0;
    }
     else if(Salary>50000 && Gender=='M')
    {
        Bonus=Salary*0.10;
        printf("Bonus = Rs. %.2f",Bonus);
        return 0;
    }
    else if(Salary>50000 && Gender=='F')
    {
        Bonus=Salary*0.15;
        printf("Bonus = Rs. %.2f",Bonus);
        return 0;
    }
    return 0;
}