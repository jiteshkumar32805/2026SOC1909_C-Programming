//to determine the area of a circle
#include <stdio.h>
#define PI 3.14159//define the value of PI
int main()
{
    float r , a ; //declare two float variables r and a
    printf("enter the radius of circle\n");//prompt the user to enter the radius of the circle
    scanf("%f",&r);//read the radius of the circle from the user
    a=PI*r*r;//calculate the area of the circle using the formula a=PI*r*r
    printf("Area of the circle =%f" ,a);//print the area of the circle
    return 0;
}