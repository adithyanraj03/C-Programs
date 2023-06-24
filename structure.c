#include<stdio.h>
struct student
{
    char name[20];
    int regno;
    int mark1;
    int mark2;
    int mark3;
    int total;
};
struct student stu1,stu2;
void main()
{
    printf("Enter the student name:\n");
    scanf("%s",stu1.name);
    printf("Enter registration number:\n");
    scanf("%d",&stu1.regno);
    printf("Enter three subject marks:\n");
    scanf("%d",&stu1.mark1);
    scanf("%d",&stu1.mark2);
    scanf("%d",&stu1.mark3);
    stu1.total=stu1.mark1+stu1.mark2+stu1.mark3;
    printf("Enter the student name:\n");
    scanf("%s",stu2.name);
    printf("Enter registration number:\n");
    scanf("%d",&stu2.regno);
    printf("Enter three subject marks:\n");
    scanf("%d",&stu2.mark1);
    scanf("%d",&stu2.mark2);
    scanf("%d",&stu2.mark3);
    stu2.total=stu2.mark1+stu2.mark2+stu2.mark3;
    printf("Total marks of %s is %d\n",stu1.name,stu1.total);
    printf("Total marks of %s is %d",stu2.name,stu2.total);
}
