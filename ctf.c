//program to swap two numbers using the temproary variable 
#include <stdio.h>
int main()
{
      int a, b,s;//declare three integer variables a,b,c
      printf("Enter two numbers: ");//prompt the user to enter two numbers
      scanf("%d %d", &a, &b);//read two no. from the user
      printf("Before swapping: a = %d, b = %d\n", a, b);//print the value before swaping
      s = a;//store the value of a in s
      a = b;//store the value of b in a
      b = s;//store the value of s in b
      printf("After swapping: a = %d, b = %d\n", a, b);//print the swapped values
     return 0;
}