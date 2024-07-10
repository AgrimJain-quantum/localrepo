#include<stdio.h>
int main(){
    int age;
    printf("enter age :");
    scanf("%d",&age);
    if (age >= 18) {
        printf("adult \n");
    }else if(age >10 && age <18 )  {
        printf("teens \n");
    }else{
        printf("child");
    }
    return 0;
}