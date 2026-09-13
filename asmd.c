/* This program implements a simple menu-driven calculator that performs basic arithmetic operations:
 addition, subtraction, multiplication, and division by geting input from the user*/
 #include<stdio.h>
int main()
 {
   int choice;// Declaring a variable to store the user's menu choice
   float num1, num2, result;// Declaring variables to store the two numbers and the result of the operation
   do// Starting a do-while loop to repeatedly display the menu and perform calculations until the user chooses to exit
    {
        /*
        Display the menu options to the user. 
        The menu includes options for addition, subtraction, multiplication, division
        it also includes an option for exiting the program.
        */
      printf("\n----- Menu-Driven Calculator -----\n");
      printf("1. Addition\n");
      printf("2. Subtraction\n");
      printf("3. Multiplication\n");
      printf("4. Division\n");
      printf("5. Exit\n");
      printf("Enter your choice (1-5): ");// Prompting the user to enter their choice of operation
      scanf("%d", &choice);// Reading the user's choice and storing it in the variable 'choice'
      if (choice == 5) // Checking if the user chose to exit the program
      {
        printf("Exiting the calculator. Goodbye!\n");// Printing a goodbye message before exiting
        break;// Breaking out of the loop to exit the program
      }
      if (choice >= 1 && choice <= 4) // Checking if the user's choice is valid (between 1 and 4)
      {
       printf("Enter two numbers: ");
       scanf("%f %f", &num1, &num2);// Reading two numbers from the user and storing them in 'num1' and 'num2'
      }
      else 
      {
        printf("Invalid choice! Please try again.\n"); // Printing an error message if the user's choice is invalid
        continue;// Continuing to the next iteration of the loop to display the menu again
     }
       switch (choice)// Using a switch statement to perform the operation based on the user's choice
     {
       case 1:
       result = num1 + num2;//addition operation
       printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
       break;
       case 2:
       result = num1 - num2;//subtraction operation
       printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
       break;
       case 3:
       result = num1 * num2;//multiplication operation
       printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
       break;
       case 4:
       if (num2 != 0) // Checking if the second number is not zero to avoid division by zero
       {
       result = num1 / num2;//division operation
       printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
       } 
       else// If the second number is zero, print an error message to inform the user that division by zero is not allowed  
       {
        printf("Error: Division by zero is not allowed.\n");
       }
        break;
        default:// Default case to handle any unexpected input, though it should not be reached due to prior validation
        printf("Invalid choice! Please try again.\n");// Printing an error message if the user's choice is invalid
     }
    } 
    while (choice != 5);// Continuing the loop until the user chooses to exit by entering 5
    return 0;// Returning 0 to indicate that the program has executed successfully
}