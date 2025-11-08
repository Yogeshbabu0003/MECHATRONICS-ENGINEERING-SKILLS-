#include<stdio.h>
int main()
{
    char name[20];
    int age,gender;
    scanf("%s",&name);
    scanf("%d",&age);
    scanf("%d",&gender);
    if(gender==1){
        if(age<1){
            printf("Invalid Age");
        }
        else if(age<18){
            printf("Eligibility status : Not eligible");
            printf("Salutation:Not eligible");
        }
        else{
            printf("Eligibility status : Eligible \n");
            printf("Salutation:Mr.%s",name);
        }
    }
    else if(gender==2){
        if(age<1){
            printf("Invalid Age");
        }
        else if(age<18){
            printf("Eligibility status : Not eligible\n");
            printf("Salutation:Not eligible");
        }
        else{
            printf("Eligiblity status: Eligible");
            printf("Salutation:Ms.%s",name);
        }
    }
    else{
        printf("Please type the valid gender");
    }
 return 0;
}