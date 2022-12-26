#include <stdio.h>
int main() {
struct Student
{
  int id;
  char name[10];
  int age;
}
   
  Student aman;
  Student himanshu;

  aman.id = 10;
  aman.name = "Aman";
  aman.age = 26;

  himanshu.id = 12;
  himanshu.name = "Himanshu";
  himanshu.age = 22;

  printf(himanshu.age);
  return 0;
}