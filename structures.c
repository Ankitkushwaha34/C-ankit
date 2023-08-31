#include<stdio.h>
struct student
{
    int id;
    int marks;
    char fav_char;
};


int main()
{
   struct student ankit ,aditya,harshit;
   ankit.id =34;
   aditya.id=46;
   harshit.id=45;
   ankit.marks =34;
   aditya.marks=466;
   harshit.marks=45;
   ankit.fav_char ='i';
   aditya.fav_char='i';
   harshit.fav_char='i';
   printf("ankit got %d marks\n",ankit.marks);
    return 0;
}
