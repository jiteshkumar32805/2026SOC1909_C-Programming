//to determine the average of three numbers
#include <stdio.h>
int main()
{
    float a,b,c;//declare three float variables
    float avg;//declare a float variable for average
    printf("Enter three numbers: \n");//prompt the user to enter three numbers
    scanf("%f %f %f", &a, &b, &c);//read three float numbers from the user
    avg = (a + b + c) / 3;//calculate the average of three numbers
    printf("Average of three numbers: %f\n", avg);//print the average of three numbers
    return 0;
}