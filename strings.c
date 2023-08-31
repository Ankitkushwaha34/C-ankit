#include<stdio.h>
void printstr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
}
int main()
{
    //char str[]={'a','n','k','i','t','\0'};
    char str[45];
    gets(str);
    printf("using custom function printstr\n");
    printstr(str);
    return 0;
}
