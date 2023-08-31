#include<stdio.h>
int main()
{
   int marks[2][4]={{45,24 ,3,2},
                     {3,2,3,3}};
   //marks[0]=34;
   for ( int i = 0; i <2; i++)
   {
    for ( int j = 0; j <4; j++)
    {
     
    
    
    printf("the value of %d , %d element of the array is %d\n",i,j,marks[i][j]);
    }
   }
   
   //printf("marks of student 1 is %d ",marks[0]);
    return 0;
}
