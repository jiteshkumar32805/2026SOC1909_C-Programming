// C program to print multiplication table of a given number using while, do-while and for loop
#include <stdio.h>
int main() 
{
   int n, i;// Variable declaration
   printf("Enter a number: ");
   scanf("%d", &n);
   // Using while loop
   printf("\nMultiplication Table using while loop:\n");
   i = 1;
   while (i <= 10) 
    {
      printf("%d x %d = %d\n", n, i, n * i);// Print multiplication table
      i++;
    }
    // Using do-while loop
    printf("\nMultiplication Table using do-while loop:\n");
    i = 1;
    do 
    {
      printf("%d x %d = %d\n", n, i, n * i);
      i++;
    }
     while (i <= 10);
    // Using for loop
    printf("\nMultiplication Table using for loop:\n");// Print multiplication table
    for (i = 1; i <= 10; i++) 
    {
       printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}