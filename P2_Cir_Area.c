#include<stdlib.h>
#include<conio.h>

void main()
{
    float radius;
    
    printf("Enter Radius(cm) : ");
    scanf("%f",&radius);
    
    printf("Area of circle is : %f", 3.14 * radius * radius);

    getch();
}
