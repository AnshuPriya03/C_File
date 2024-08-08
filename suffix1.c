#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int op(char symbol,int op1,int op2)
{
    switch(symbol)
    {
        
        case '+':return op1+op2;
        case '-':return op1-op2;
        case '*':return op1*op2;
        case '/':return op1/op2;
        case '^':return op1^op2;
    }
    return 0;
}

void push(double item,int *top,double s[])
{
    *top=*top+1;
    s[(*top)]=item;
}

double pop(int *top,double s[])
{
    double item;
    item=s[*top];
    *top=*top-1;
    return item;
}



void main()
{
    int i;
    int top=-1;
    int op1,op2,result;
    char symbol,postfix[10];
    double s[10];
    printf("Enter the postfix expression\n");
    scanf("%s",postfix);
    for(i=0;i<strlen(postfix);i++)
    {
        symbol=postfix[i];
        if (isdigit(symbol))
        {
        push(symbol-'0',&top,s);
        }

    else
    {
        op2=pop(&top,s);
        op1=pop(&top,s);
        result=op(symbol,op1,op2);
        push(result,&top,s);
    }
    }

    result=pop(&top,s);
    printf("The result of the postfix expression is %d \n",result);
}
