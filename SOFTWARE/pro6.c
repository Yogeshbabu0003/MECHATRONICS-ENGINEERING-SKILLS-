#include<stdio.h>
int main()
{
    char name[20];
    int rn,tc,ac;
    float P;
    scanf("%s %d %d %d",&name,&rn,&tc,&ac);
    if( rn>0 && tc>ac)
    {
        P=(ac*100)/tc;
        printf("Attendence Percentage : %.2f",P);
    }
    else if(tc<ac)
    {
        printf("Number of attended class cannot be greater than total number of class");
    }
    else if(ac<0)
    {
        printf("Invalid number of class attended");
    }
    else if(tc<0)
    {
        printf("Invalid total number of class");
    }
    return 0;
}