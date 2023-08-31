#include<stdio.h>
//#include<stdlib.h>
int main()
{
    FILE *ptr =NULL;
    char string[34]="this content";
    //reading a file
    // ptr = fopen("my_file.txt","r");
    // fscanf(ptr,"%s",string);
    // printf("The content of this file has %s\n",string);


    //writing a file
    ptr = fopen("my_file.txt","w");
     fprintf(ptr,"%s",string);
    return 0;
}
