#include<stdio.h>
int main ()
{
    char c;
    scanf("%c",&c);
    if (c=='R')
    {
        printf("STOP");
    }
    else if (c=='Y')
    {
        printf("WAIT");
    }
    else if (c=='G')
    {
        printf("GO");
    }
    else
    { 
        printf("Invalid user input");
    }













    return 0;

}