#include<stdio.h>
#include<string.h>
int main()
{
    char month[10];
    scanf("%s",month);
    if(strcmp(month,"january") ==0 || strcmp(month,"december")==0)
    {
        printf("Sunrise : 6.45 am \n");
        printf("Sunset : 5.45 pm ");
    }
    
   else if(strcmp(month,"february")==0 || strcmp(month,"november")==0)
    {
        printf("Sunrise : 6.35 am \n");
        printf("Sunset : 6.10 pm ");
    }
    
    else if(strcmp(month,"march")==0 || strcmp(month,"october")==0)
    {
        printf("Sunrise : 6.20 am \n");
        printf("Sunset : 6.20 pm ");
    }
    
    else if(strcmp(month,"april")==0 || strcmp(month,"september")==0)
    {
        printf("Sunrise : 6.00am \n");
        printf("Sunset : 6.30pm ");
    }
    
    else if(strcmp(month,"may") ==0 || strcmp(month,"august")==0)
    {
        printf("Sunrise : 5.40 am \n");
        printf("Sunset : 6.45 pm ");
    } 
    
    else if(strcmp(month,"june")==0 || strcmp(month,"july")==0)
    {
        printf("Sunrise : 5.30 am \n");
        printf("Sunset : 6.50 pm ");
    }
    else
    {
        printf("Invalid input");
    }
    return 0;
}
