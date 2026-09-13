// This program demonstrates operator precedence and logical operators in C. 
#include <stdio.h>
		int main() 
   {
		int a = 5, b = 10, c = 2,result1, result2;// Declaring and initializing variables		
		result1 = a + b * c;// Demonstrating operator precedence: multiplication before addition 		
		result2 = (a + b) * c;// Using parentheses to change the order of operations
		printf("a + b * c = %d\n", result1);// Output: 25
		printf("(a + b) * c = %d\n", result2);// Output: 30
		int x = 5, y = 10, z = 15;// Declaring and initializing variables for logical operations
		int logicResult = x < y && y < z; // Demonstrating logical AND operator
		printf("x < y && y < z = %d\n", logicResult);// Output: 1 (true)
		return 0;
	}