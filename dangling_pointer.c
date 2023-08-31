#include<stdio.h>
#include<stdlib.h>
int sum =34;
int *functionDangling()
{
    int a, b ,sum2;
    a=34;
    b=354;
    sum =a+b;
    return &sum;
}
int main()
{
    //case1: de allocation of memory block
   int *ptr=(int*) malloc(7* sizeof(int));
   ptr[0]=31;
   ptr[1]=32;
   ptr[2]=33;
   ptr[3]=34;
   free(ptr); // ptr is now a dangling pointer

   //case 2: Function returning local variable address
    int *dangptr=functionDangling(); // ptr is now a danglin g pointer

    int *danglingptr3;
    //Case 3: if a variable goes out of scope
    {
        int a=12;
        danglingptr3=&a;
    }
    // here variable a goes out of scope which means danglingptr3 is pointing to a location which is freed and hence danglingptr3 is now a dangling pointer
    return 0;
}
