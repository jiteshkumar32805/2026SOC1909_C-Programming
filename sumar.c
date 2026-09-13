//to calculate the sum of elements in an array
#include<stdio.h>
int main()
{
   int arr[100],n,i,sum=0;//declare an array of size 100 and variables n, i, and sum
   printf("Enter the number of elements in the array: ");
   scanf("%d",&n);//input the number of elements in the array
   printf("Enter %d elements:\n", n);
    for(i=0;i<n;i++)// loop to input the elements of the array
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)// loop to calculate the sum of the elements in the array
    {
        sum+=arr[i];// add each element to sum
    }
    printf("Sum of the elements in the array is: %d", sum);
    return 0;
}
