// This program checks whether a number is even or odd.
#include <stdio.h>
	int main() 
	{
	int number;// Declaring a variable to store user input
	printf("Enter a number: ");// Prompting the user for input
	scanf("%d", &number);// Reading the user input and storing it in the variable 'number'
	if (number % 2 == 0) 	// Checking if the number is even using the modulus operator
	{
	printf("%d is Even\n", number);// Printing the result if the number is even
	} 
	else // If the number is not even, it must be odd
	{
	printf("%d is Odd\n", number);// Printing the result if the number is odd
	}
	return 0;
	}