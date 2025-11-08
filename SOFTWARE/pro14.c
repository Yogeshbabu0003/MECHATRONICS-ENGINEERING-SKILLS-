#include<stdio.h>
int main()
{
    int N,D,T;
    scanf("%d %d",&N,&D);
    if(N<=0 || N>6)
    {
        printf("Invalid Dice Roll");
    }
    else if (D<=0)
    {
        printf("Invalid Position of the Player");
    }
    else  if(N>=1 && N<=6) 
    {
        if (N % 2!=0)
        {
            T=D*3;
            printf("Player moves forward %d units",T);
        }
        else
        {
            T=D/3;
            printf("Players moves backwords %d units",T);
        }
    }
          

    return 0;
}