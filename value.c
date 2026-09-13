/* this program demonstrates the use of different data types
 in C programming language.
 */
#include <stdio.h>
int main()
{
    int a;//declare an integer variable
    float b;//declare a float variable
    double c;//declare a double variable
    char ch;//declare a character variable
    char name[50];//declare a string variable

    printf("Enter an integer: \n");//prompt the user to enter an integer 
    scanf("%d", &a);// read an integer from the user
    printf("Enter a float: \n");//prompt the user to enter a float
    scanf("%f", &b);// read an float from the user 
    printf("Enter a double: \n");//prompt the user to enter a double value
    scanf("%lf", &c);// raad a double value from the user
    printf("Enter a character: \n");// prompt the user to enter a character
    scanf(" %c", &ch);// read a character from the user 
    printf("Enter your name: \n");// promt the user to enter the string value
    scanf("%s", name);// read a string value from the user

    printf("INTEGER You entered: %d\n", a);// print the integer value
    printf("FLOAT You entered: %f\n", b);// print the float value
    printf("DOUBLE You entered: %lf\n", c);//print the double value
    printf("CHARACTER You entered: %c\n", ch);//print the character value
    printf("STRING You entered: %s\n", name);//print the string value

    return 0;
}