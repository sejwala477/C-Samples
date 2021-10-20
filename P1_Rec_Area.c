// Write a C program to calculate area of a rectangle.

#include<stdio.h>

int main()
{ 
    float length, breadth, area;
    printf("Enter Length(cm) : ");
    scanf("%f",&length);
    printf("Enter Breadth(cm) : ");
    scanf("%f",&breadth);
    area = length * breadth;
    printf("Area of Rectangle is : %f sq. cm", area);
    return 0;
}