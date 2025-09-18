//wap that takes an integer input from the user and check whether the number is even or odd using an if else statement. 
#include<stdio.h>
int main(){
    int a;
    printf("the input value:");
    scanf("%d",& a);
    //check even or odd
    if(a%2==0){
        printf("%d is even.\n",a);
    }else{
        printf("%d is odd.\n",a);
    }

    return 0;
}
