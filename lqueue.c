#include<stdio.h>
#include<stdlib.h>
#define max_size_queue 5
int q[max_size_queue],i,ele,rear=-1,front=0;
void main()
{
    int choice;
    void insert();
    void delete();
    void display();
    printf("\t\t\t Menu\n 1.Insert an element\n 2.Delete an element\n Display the queue\n 4.Exit\n");
    while(1)
    {
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insert();
            break;
            case 2:delete();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            break;
            default:printf("Invalid option,enter valid option\n");
        }
    }
}
void insert()
{
    if (rear==(max_size_queue)-1)
    printf("The queue is full\n");
    else
    {
        printf("Enter an element to be inserted\n");
        scanf("%d",&ele);
        q[++rear]=ele;
    }
}
void delete()
{
    if(front==rear+1)
    printf("Queue is empty\n");
    else
    q[front++];
}
void display()
{
    if(rear==-1)//front>rear
    printf("Queue is empty\n");
    else
    {
        for(i=front;i<=rear;i++)
        printf("%d",q[i]);
    }
}
