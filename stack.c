#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max_size 5
int stack[max_size],top=-1,choice;
void push()
{
    int i,n,item;
    if(top==(max_size-1))
    {
        printf("Stack overflow\n");
    }
    else
    {
        printf("Enter how many elements\n");
        scanf("%d",&n);
        printf("Enter the elements\n");
        for(i=0;i<n;i++)
        {
          scanf("%d",&item);
        top=top+1;
        stack[top]=item;  
        }
       
    }

    
}


void pop()
{
    int item,n;
    if(top==-1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        item=stack[top];
        top=top-1;
        printf("The popped element is %d\n",item);
    }
}


void display()
{
    int i;
    if(top==-1)
    {
        printf("The stack is empty\n");
    }
    else
    {
        printf("The stack elements are\n");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}
void main()
{
    int choice;
    printf("********STACK OPERATION*********\n");
    printf("1.PUSH\n");
    printf("2.POP\n");
    printf("3.DISPLAY\n");
    printf("4.EXIT\n");
    
    while(1)
    {
        printf("Enter your choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
             case 1:push();
             break;
             
             case 2:pop();
             break;

             case 3:display();
             break;

             case 4:exit(0);
             break;

             default:printf("Invalid choice,enter valid option\n");

        }
       
    }
    
    
}
