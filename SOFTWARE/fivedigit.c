#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a>=10000 && a<=99999 || a<=-10000 && a>=-99999)
    {
        printf("the number is a five digit number");
    }
  else
  {
    printf("the number is not a five digit number");
  }

    return 0;
}