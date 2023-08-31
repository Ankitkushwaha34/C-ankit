#include<stdio.h>
//#include<string.h>
int main()
{
  int a=34;
  int *ptr = NULL;
  if (ptr!=NULL)
  {
    printf("The address of a is %d \n",*ptr);
  }
  else{
    printf("The pointer is a null pointer and cannot be dereferenced");
  }
  
//  printf("The address of a is %d\n",*ptr);
  
    return 0;
}
