//wap a c program to calculate the area and perimeter of the reactangle based on its length and width
#include<stdio.h>
int main(){
    int length , width, area, perimeter;
    printf("enter the length of the reactangle:");
    scanf("%d", &length);
    printf("enter the width of the reactangle:");
    scanf("%d", &width);
    area = length*width;
    perimeter = 2*(length +width);
    printf("area of the reactangle is :%d/n", area);
    printf("perimeter of the reactangle is :%d/n",perimeter);
    return 0;
}
    



