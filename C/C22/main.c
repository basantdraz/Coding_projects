#include <stdio.h>
#include <stdlib.h>
struct student {
 char name[50];
 char major[50];
 int age;
 double gpa;
};

int main()
{
   struct student student1;
   student1.age= 23;
   student1.gpa = 3.15;
   strcpy(student1.name, "basant");
   strcpy (student1.major, "engineering");

   printf("%s" , student1.name);
    return 0;
}
