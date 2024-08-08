#include<stdio.h>
#include<stdlib.h>
#define cq_size 5
int cq[cq_size],i,item,rear=-1,front=-1;
void main()
{
    int choice;
    void cqinsert();
    void cqdelete();
    void cqdisplay();
    printf("\t\t\tMENU\n 1.Insert an element\n 2.Delete an element\n 3.Display an element\n 4.Exit\n");
    while(1)
    {
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:cqinsert();
            break;
            case 2:cqdelete();
            break;
            case 3:cqdisplay();
            break;
            case 4:exit(0);
            break;
            default:printf("Invalid option,enter valid option\n");
        }
        void cqinsert()
        {
            if(rear+1)%cq_size==front)
            {
                printf("\n Circular queue overflow\n");
            }
            else
            {
                printf("Enter the item to be inserted\n");
                scanf("%d",&item);
                if(front==-1)
                front=rear=0;
                else
                rear=(rear+1)%cq_size;
                cq[rear]=item;
            }
        }
        void cqdelete()
        {
            if (front==-1)
            printf("\n Circular queue underflow\n");
            else
            {
                printf("The item deleted is %d\n",cq[front]);
                if(front==rear)
                front=rear=-1;
                else
                front=(front+1)%cq_size;
            }
        }
        void display()
        {
            int i;
            if(front==-1)
            printf("\n Circular queue is empty\n");
            else
            {
                if(front>rear)
                {
                    printf("The items in the queue are\n");
                    for(i=front;i<=rear;i++)
                    printf("%d\t",cq[i]);
                }
            }
            printf("\n");
        }
                

    
        
            
        

            
        
    


}
