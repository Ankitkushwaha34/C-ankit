#include<stdio.h>
#include<string.h>
int main()
{
   int a=345;
   float b=8.3;
   void *ptr;
   ptr=&b;
printf("The value of a is %f\n",*((float *)ptr));   
 return 0;
}
