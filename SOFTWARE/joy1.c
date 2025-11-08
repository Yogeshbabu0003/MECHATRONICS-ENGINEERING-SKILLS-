#include<stdio.h>
int main()
{
    float fy;
    scanf("%f",&fy);
    if(fy<2000 && fy>0)
    {
        printf("Infrasound");
    }
    else if(25000>fy>20000)
    {
        printf("ultrasound");
    }
    
    else
    {
        printf("invalid input");
    }

    return 0;
}