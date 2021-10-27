#include<stdio.h>
int main()
{
   int rollno;
   int sem;
   int no_onecredit;
   char name_onecredit[15];
   int value_addcourse;
   char name_valueadd[15];
   char nptel_grade;
   scanf("%d",&rollno);
   scanf("%d",&sem);
   scanf("%d",&no_onecredit);
   scanf("%s",name_onecredit);
   scanf("%d",&value_addcourse);
   scanf("%s",name_valueadd);
   scanf("%s",nptel_grade);
   printf("Student performance in their activities");
   printf("Rollno:%d",rollno);
   printf("Semester:%d",sem);
   printf("No of one credit course:%d",no_onecredit);
   printf("Name of one credit course:%s",name_onecredit);
   printf("No of value added courses:%d",value_addcourse);
   printf("Name of value added course:%s",name_valueadd);
   printf("***NPTEL details***");
   printf("NPTEL grade is:%s",nptel_grade);
}
