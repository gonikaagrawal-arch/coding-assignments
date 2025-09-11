//given three values, write a program to read three values from keyboard and print out the largest of them. 
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter three values:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c){
        printf("%d is the largest value",a);
    }
    else if(b>=a && b>=c){
        printf("%d is the largest value",b);
    }
    else{
        printf("%d is the largest value",c);
    }
    return 0;
    
    
    
    

}