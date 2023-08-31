#include<stdio.h>
int main()
{
    int i,num,j;
//   label:
//   printf("we are inside the label\n");
//   goto end;
//   printf("Hello World\n");
//   goto label;
//   end:
//   printf("We are at the end") ;
for ( i = 0; i <8; i++)
{
   printf("%d\n",i);
   for ( j = 0; j < 8; j++)
   {
    printf("Enter the number. enter 0 to exit");
    scanf("%d",&num);
    if (num==0)
    {
       goto end;
    }
    
   }
   
}
end:
    return 0;
}
