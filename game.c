#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int generateRandomNumber(int n){
   srand(time(NULL));
    return rand()%n;
}
int main()
{
    
    printf("The random number between 0 to 5 is %d\n",generateRandomNumber(5));
    return 0;
}
