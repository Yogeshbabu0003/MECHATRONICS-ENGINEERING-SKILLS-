#include<stdio.h>
int main()
{
    char s,t;
    int u;
    scanf("%c %c %u",&s,&t,&u);
    if (s=='S'&& t=='D' && u==1)
    {
        printf("s : small\n");
        printf("t : diesel\n");
        printf("u : household purpose");
    }
    else if (s=='M'&& t=='D' && u==1)
    {
        printf("s : medium \n");
        printf("t : diesel\n");
        printf("u : household purpose");
    }
    else if (s=='L'&& t=='D' && u==1)
    {
        printf("s : large \n");
        printf("t : diesel\n");
        printf("u : household purpose");
    }
    else if (s=='S'&& t=='P' && u==1)
    {
        printf("s : small\n");
        printf("t : petrol\n");
        printf("u : household purpose");
    }
    else if (s=='M'&& t=='P' && u==1)
    {
        printf("s : medium \n");
        printf("t : petrol\n");
        printf("u : household purpose");
    }
    else if (s=='L'&& t=='P' && u==1)
    {
        printf("s : large \n");
        printf("t : petrol\n");
        printf("u : household purpose");
    }
    else if (s=='S'&& t=='G' && u==1)
    {
        printf("s : small\n");
        printf("t : gas\n");
        printf("u : household purpose");
    }
    else if (s=='M'&& t=='G' && u==1)
    {
        printf("s : medium \n");
        printf("t : gas\n");
        printf("u : household purpose");
    }
    else if (s=='L'&& t=='G' && u==1)
    {
        printf("s : large \n");
        printf("t : gas\n");
        printf("u : household purpose");
    }
    else if (s=='S'&& t=='D' && u==2)
    {
        printf("s : small\n");
        printf("t : diesel\n");
        printf("u : industtry purpose");
    }
    else if (s=='M'&& t=='D' && u==2)
    {
        printf("s : medium \n");
        printf("t : diesel\n");
        printf("u : industtry purpose");
    }
    else if (s=='L'&& t=='D' && u==2)
    {
        printf("s : large \n");
        printf("t : diesel\n");
        printf("u : industtry  purpose");
    }
    else if (s=='S'&& t=='P' && u==2)
    {
        printf("s : small\n");
        printf("t : petrol\n");
        printf("u : industtry  purpose");
    }
    else if (s=='M'&& t=='P' && u==2)
    {
        printf("s : medium \n");
        printf("t : petrol\n");
        printf("u : industtry  purpose");
    }
    else if (s=='L'&& t=='P' && u==2)
    {
        printf("s : large \n");
        printf("t : petrol\n");
        printf("u :industtry purpose");
    }
    else if (s=='S'&& t=='G' && u==2)
    {
        printf("s : small\n");
        printf("t : gas\n");
        printf("u : industtry  purpose");
    }
    else if (s=='M'&& t=='G' && u==2)
    {
        printf("s : medium \n");
        printf("t : gas\n");
        printf("u : industtry  purpose");
    }
    else if (s=='L'&& t=='G' && u==2)
    {
        printf("s : large \n");
        printf("t : gas\n");
        printf("u : industtry  purpose");
    }
     else if (s=='S'&& t=='D' && u==3)
    {
        printf("s : small\n");
        printf("t : diesel\n");
        printf("u :  personal purpose");
    }
    else if (s=='M'&& t=='D' && u==3)
    {
        printf("s : medium \n");
        printf("t : diesel\n");
        printf("u : personal purpose");
    }
    else if (s=='L'&& t=='D' && u==3)
    {
        printf("s : large \n");
        printf("t : diesel\n");
        printf("u :  personal purpose");
    }
   else if (s=='S'&& t=='P' && u==3)
    {
        printf("s : small\n");
        printf("t : petrol\n");
        printf("u :  personal  purpose");
    }
    else if (s=='M'&& t=='P' && u==3)
    {
        printf("s : medium \n");
        printf("t : petrol\n");
        printf("u :  personal  purpose");
    }
    else if (s=='L'&& t=='P' && u==3)
    {
        printf("s : large \n");
        printf("t : petrol\n");
        printf("u : personal purpose");
    }
    else if (s=='S'&& t=='G' && u==3)
    {
        printf("s : small\n");
        printf("t : gas\n");
        printf("u :  personal  purpose");
    }
    else if (s=='M'&& t=='G' && u==3)
    {
        printf("s : medium \n");
        printf("t : gas\n");
        printf("u :  personal  purpose");
    }
    else if (s=='L'&& t=='G' && u==3)
    {
        printf("s : large \n");
        printf("t : gas\n");
        printf("u : personal  purpose");
    }
    else 
    {
        printf ("Invalid input");
    }
    return 0;
}