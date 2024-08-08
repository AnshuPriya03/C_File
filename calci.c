#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float op1,op2,result;
    char oper;
    printf("Enter the arithmetic operation\n");
    scanf("%f %c %f",&op1,&oper,&op2);
    switch(oper)
    {
    case '+' : result=op1+op2;
    break;
    case'-' :result=op1-op2;
    break;
    case'*' :result=op1*op2;
    break;
    case'/' :result=op1/op2;
    break;
    case'%' :result=(int)op1%(int)op2;
    break;
    default:printf("Enter the proper arithmetic operation\n");
    }
    printf("%f %c %f=%f\n",op1,oper,op2,result);
     exit(0);
    return 0;
}