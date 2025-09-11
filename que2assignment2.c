//wap a c program to convert temperature from celcius to fahrenheit using the formula f=(c*9/5)+32
#include<stdio.h>
int main(){
    float c,f;
    printf("Enter the temperature in celcius:");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("Temperature in fahrenheit is:%.2f\n",f);
    return 0;
}