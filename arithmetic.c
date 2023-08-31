#include <stdio.h>
int main()
{
    int a,b;
   // a=34;
   // b=6;
    printf("Enter values for a and b: ");
    scanf("%d %d", &a, &b);
    printf("a + b =%d\n" ,a+b);
    
    printf("a - b =%d\n" ,a-b);
     
    printf("a * b =%d\n" ,a*b);
   
    
    if (b != 0) {
        float divisionResult = (float)a / b;
        printf("a / b = %f\n", divisionResult);
    } else {
        printf("Cannot divide by zero.\n");
    }
    
}
