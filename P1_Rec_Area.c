#include<stdio.h>
#include<conio.h>

void main()
{ 
    float length, breadth, area;
    
    printf("Enter Length(cm) : ");
    scanf("%f",&length);
    
    printf("Enter Breadth(cm) : ");
    scanf("%f",&breadth);
    
    area = length * breadth;
    
    printf("Area of Rectangle is : %f sq. cm", area);
    
    getch();
}
