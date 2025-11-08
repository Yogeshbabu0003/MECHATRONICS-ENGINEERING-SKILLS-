#include<stdio.h>
#include<math.h>
int main()
{
    int P;
   float R,t,A,T,r;
   scanf("%d",&P);
   scanf("%f",&R);
   scanf("%f",&T);
   t=T;
   r=(1+(R/100));
   A=P*pow(r,t);
   if(P<1 || P>pow(2,31)-1)
   {
    printf("Principle amount must be between 1 and 2^31-1");
   }
   else if(R<1.0 || R>8.5) 
   {
    printf("Interest rate must be between 1.0 and 8.5.");
   }
   else if (T<=0)
   {
    printf("INVALID TIME PERIOD");
   }
   else 
   {
    printf("%.2f",A);
   }
return 0;
}