#include<stdio.h>
struct student
{
    char name[20];
    int regno;
    int mark[3];
    int total;
};
void main()
{
    int n;
    printf("Enter number of student details to store:\n");
    scanf("%d",&n);
    struct student stu[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the student name:\n");
        scanf("%s",stu[i].name);
        printf("Enter registration number:\n");
        scanf("%d",&stu[i].regno);
        printf("Enter three subject marks:\n");
        stu[i].total=0;
        for(int j=0;j<3;j++)
        {
             scanf("%d",&stu[i].mark[j]);
             stu[i].total=stu[i].total+stu[i].mark[j];
        }
    }
    for(int i=0;i<n;i++)
        printf("Total marks of %s is %d\n",stu[i].name,stu[i].total);
}
