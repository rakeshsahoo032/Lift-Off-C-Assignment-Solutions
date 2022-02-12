#include<stdio.h>
#include<conio.h>
int main()
{
    int r,d;
    float a,c;
    printf("Enter the radius: ");
    scanf("%d",&r);
    d=2*r;
    a=3.14*r*r;
    c=2*3.14*r;
    printf("Diameter of circle: %d\n",d);
    printf("Area of the circle: %f\n",a);
    printf("Circumference of the circle: %f\n",c);
}