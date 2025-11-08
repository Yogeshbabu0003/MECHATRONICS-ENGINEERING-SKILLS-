#include<stdio.h>
int main()
{
    int railwaytime,h1,m1,h;
    scanf("%d",&railwaytime);
    h1=railwaytime/100;
    m1=railwaytime%100;
    if(railwaytime<0000 || railwaytime>2359)
    {
        printf("Invalid railway time output");
    }
    else if(h1<0 || h1>23 || m1<0 || m1>60)
    {
        printf("Invalid railway time input");
        
    }
    else if (m1>60)
    {
        printf("Invalid railway time input");
    }
    else 
    {
         if (h1<12 && h1>0 && m1<60)
        {
            printf("12 hours time : %d:%.2d AM",h1,m1);
        }
        else if (h1>12 && m1<60)
        {
            h=h1-12;
            printf("12 hours time : %d:%.2d PM",h,m1);
        }
        else if(h1==12 && m1<60)
        {
            printf("12 hours time : %d:%.2d PM",h1,m1);
        }
        if(h1==0)
        {
            printf("12 hours time : 12:%.2d AM",m1);
        }
    }
    return 0;
}