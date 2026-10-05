#include<stdio.h>
int main()
{
  int a[10][10],b[10][10],c[10][10];
  int row,co,i,j;
  printf("enter the no. of rows and columns");
  scanf("%d%d",&row,&co);
  printf("enter the matrix A  value \n");
  for(i=0; i<row;i++)
  {
    for ( j=0;j<co;j++)
    {
        scanf("%d",&a[i][j]);
    }
  }
  printf("enter the matrix B value \n");
  for(i=0; i<row;i++)
  {
    for ( j=0;j<co;j++)
    {
        scanf("%d",&b[i][j]);  
    }
  }
  for(i=0; i<row;i++)
  {
    for ( j=0;j<co;j++)
    {
        c[i][j]=a[i][j]+b[i][j]; 
    }
  }
  printf("the sum =\n");
  for(i=0; i<row;i++)
  {
    for ( j=0;j<co;j++)
    {
       printf("%d\t", c[i][j]);
        
    }
    printf("\n");
  }
  return 0;
}