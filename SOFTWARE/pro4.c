#include<stdio.h>
int main()
{
    int s,c,p;
    scanf("%d %d",&s,&c);
    p=s-c;
    if(s>=0 && c>=0)
    {
        printf("p=%d\n",p);
     
    if (p==0)
    {
        printf("Result:break even");
    }
    else if (p>0)
    {
        printf("result:profit");

    }
}
   return 0;

}