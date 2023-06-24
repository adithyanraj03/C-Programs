#include<stdio.h>
#include<string.h>
void main()
{
    int x='a',w,d=3;
    char name[10]="JERRY";
     //printf("%-10.3s\n",name);
    //printf("%d",x);
    w=strlen(name);
    for(d=1;d<=w;d++)
        printf("%*.*s\n",w,d,name);
}
