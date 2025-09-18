//nested statement:

#include<stdio.h>
int main(){
    int age;
    printf("age of a person is:");
    scanf("%d",&age);
    //check eligible to vote or not.
    if(age>=18){
        printf("eligible to vote.\n");
    }
    else{
        if(age<0){
            printf("invalid age.\n");

        }else{
            printf("not eligible to vote.\n");
        }
    }
    return 0;



}
