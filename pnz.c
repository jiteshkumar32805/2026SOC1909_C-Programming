// This program checks whether a number is positive, negative, or zero.
#include <stdio.h>
int main() 
{
    int number;// Declaring a variable to store user input
    printf("Enter a number: ");// Prompting the user for input
    scanf("%d", &number);// Reading the user input and storing it in the variable 'number'
    if (number > 0) // Checking if the number is positive
    {
      printf("%d is Positive\n", number);// Printing the result if the number is positive
    } 
    else if (number < 0) // Checking if the number is negative
    {
      printf("%d is Negative\n", number);// Printing the result if the number is negative
    }
    else // If the number is neither positive nor negative, it must be zero
    {
      printf("The number is Zero\n");// Printing the result if the number is zero
    }
    return 0;
}