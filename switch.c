#include<stdio.h>
void main()
{
    float a,b,c;
    int option;
    do
    {
    printf("Calculator-Enter your choice:\n1-Addition\n2-Subtraction\n3-Multiplication\n4-Division\nPress any key to terminate\n");
    scanf("%d",&option);
    printf("Enter non-zero value for a and b:\n");
    scanf("%f%f",&a,&b);
    switch(option)
    {
   // case '1':
    case 1:
        c=a+b;
        break;
   // case '2':
    case 2:
        c=a-b;
        break;
   // case '3':
    case 3:
        c=a*b;
        break;
   // case '4':
    case 4:
        c=a/b;
        break;
    default:
       exit(0);
    }
    printf("Value of c:%f",c);
    }while(1);


}
