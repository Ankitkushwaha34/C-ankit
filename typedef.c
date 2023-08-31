#include<stdio.h>
typedef struct student{
    int id;
    int marks;
    char fav_char;
    char name[34];
}std;
int main()
{
    //typedef <previous_name> <alias_name>
    // typedef unsigned long ul;
    // ul li,l2,l3;
    std s1,s2;
    s1.id=56;
    s2.id=67;
    printf("value of s1 id is %d\n",s1.id);
    printf("value of s2 id is %d\n",s2.id);
    return 0;
}
