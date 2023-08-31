#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *ptr =NULL;
    ptr= fopen("my_file.txt","a+");
    // char c= fgetc(ptr);
    // printf("The character i read was %c\n",c);
    //  c= fgetc(ptr);
    // printf("The character i read was %c\n",c);

    char str[4];
    fgets(str, 5 ,ptr);
    printf("The string is %s\n",str);



    // fputc('o', ptr);
    // fputs("this is ankit kushwaha",ptr);
    fclose(ptr);
    return 0;
}
