#include<stdio.h>
int main()
{
    int U,t;
    float B,S,T;
    scanf("%d",&U);
     
    if(U<0)
    {
        printf("Bill amount before surcharge: Rs.0.00\n");
        printf("Surcharge amount: Rs.0.00\n");
        printf("Total bill amount after surcharge: Rs.0.00\n");
        printf("Reason: Negative units are invalid; hence, no charge is calculated.");
    }

    else if(U==0)
    {
        printf("Bill amount before surcharge: Rs.0.00\n");
        printf("Surcharge amount: Rs.0.00\n");
        printf("Total bill amount after surcharge: Rs.0.00\n");
        printf("Reason: No units consumed; hence, no charge is calculated.");
    }


    else if(U>0 && U<=50)
    {
        B=U*0.50;
        printf("Bill amount before surcharge: Rs.%.2f\n",B);
        S=0.20*B;
        printf("Surcharge amount: Rs.%.2f\n",S);
        T=B+S;
        printf("Total bill amount after surcharge: Rs.%.2f\n",T);
    }

    else if(U>50 && U<=150)
    {
        t=25;
        U=U-50;
        B=U*0.75+t;
        printf("Bill amount before surcharge: Rs.%.2f\n",B);
        S=0.20*B;
        printf("Surcharge amount: Rs.%.2f\n",S);
        T=B+S;
        printf("Total bill amount after surcharge: Rs.%.2f\n",T);
    }

    else if(U>150 && U<=250)
    {
        t=100;
        U=U-150;
        B=U*1.20+t;
        printf("Bill amount before surcharge: Rs.%.2f\n",B);
        S=0.20*B;
        printf("Surcharge amount: Rs.%.2f\n",S);
        T=B+S;
        printf("Total bill amount after surcharge: Rs.%.2f\n",T);
    }

    else if(U>250)
    {
        t=220;
        U=U-250;
        B=U*1.50+t;
        printf("Bill amount before surcharge: Rs.%.2f\n",B);
        S=0.20*B;
        printf("Surcharge amount: Rs.%.2f\n",S);
        T=B+S;
        printf("Total bill amount after surcharge: Rs.%.2f\n",T);
    }
    return 0;
}