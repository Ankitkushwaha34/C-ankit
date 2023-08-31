#include<stdio.h>
#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
void greetHelloAndExecute(int(*fptr)(int,int)){
    printf("Hello\n");
printf("the sum of 5 and 7 is %d\n",fptr(5,7));
}
void greetGoodMorningAndExecute(int(*fptr)(int,int)){
    printf("Good Morning\n");
printf("the sum of 5 and 7 is %d\n",fptr(5,7));
}
int main()
{
    // printf("The sum of 1 and 2 is %d \n",sum(1,2));
    // int(*fptr)(int,int) ;
    // fptr=&sum;
    // int d=(*fptr)(4,6);
    // printf("the value of d is %d\n",d);

    int(*ptr)(int,int);
    ptr=sum;
    greetHelloAndExecute(ptr);
    return 0;
}
