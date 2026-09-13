#include<stdio.h>
int main()
{
    int intarr[5];
    float floatarr[5];
    char chararr[5];
    int i;
    //input integer array
    printf("enter 5 integers:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&intarr[i]);
    }
    //input float array
    printf("enter 5 floats:\n");
    for(i=0;i<5;i++)
    {
        scanf("%f",&floatarr[i]);
    }
    //input character array
    printf("enter 5 characters:\n");
    for(i=0;i<5;i++)
    {
        scanf(" %c",&chararr[i]);
    }
    //display integer array values and addresses
    for(i=0;i<5;i++)
    {
       printf("value = %d,\t address = %p\n",intarr[i],(void*)&intarr[i]);
    }
    //display float array values and addresses
    for(i=0;i<5;i++)
    {
        printf("value = %f, \taddress = %p\n",floatarr[i],(void*)&floatarr[i]);
    }
    //display character array values and addresses
    for(i=0;i<5;i++)
    {
        printf("value = %c,\t address = %p\n",chararr[i],(void*)&chararr[i]);
    }
    return 0;
}