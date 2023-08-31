#include<stdio.h>
int main()
{
   int arr[]={4,5,98,3,56,87};
   printf("Value at position 3 of the arrayis %d \n",arr[3]);
   printf("The address of first element of the arrayis %d \n",&arr[0]);
   printf("the address  of  second element of the arrayis %d \n",&arr[1]);
    
    printf("Value at position 3 of the arrayis %d \n",arr[3]);
   printf("The address of first element of the arrayis %d \n",*(&arr));
   printf("the value at address  of  second element of the arrayis %d \n",*(&arr[1]));
    return 0;
}
