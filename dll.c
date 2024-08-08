

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int count=0;
struct node 
{
    struct node *prev;
    struct node *next;
    int ID;
    char name[20],branch[20],aos[20];
}
*h,*temp,*temp1,*temp2;

void create()
{
    int ID;
    char name[20],branch[20],aos[20];
    temp=(struct node*)malloc(sizeof(struct node));
    temp->prev=temp->next=NULL;
    printf("Enter the details of employee\n");
    scanf("%d %s %s %s",&ID,name,branch,aos);
    temp->ID=ID;
    strcpy(temp->name,name);
    strcpy(temp->branch,branch);
    strcpy(temp->aos,aos);
    count++;
}

void insertbeg()
{
    if(h==NULL)
    {
        create();
        h=temp;
        temp1=h;
    }
    else
    {
        create();
        temp->next=h;
        h->prev=temp;
        h=temp;

    }
}

void insertend()
{
   if(h==NULL)
    {
        create();
        h=temp;
        temp1=h;
    }
    else
    {
        create();
        temp1->next=temp;
        temp->prev=temp1;
        temp1=temp;
    } 
}

void displaybeg()
{
    temp2=h;
    if(temp2==NULL)
    {
        printf("List empty to display\n");
        return;
    }
        printf("Linked list elements are:\n");
        while(temp2!=NULL)
        {
            printf("%d %s %s %s\n",temp2->ID,temp2->name,temp2->branch,temp2->aos);
            temp2=temp2->next;
        }
        printf("No. of employees:%d",count);
    
}

void deleteend()
{
    temp=h;
    if(temp->next=NULL)
    {
        free(temp);
        h=NULL;
        return ;
    }
    else
    {
       temp2=temp1->prev;
       temp2->next=NULL;
       printf("%d %s %s %s\n",temp1->ID,temp1->name,temp1->branch,temp1->aos);
       free(temp1);
    }
    count--;
    return ;
}

void deletebeg()
{
    temp=h;
    if(temp->next==NULL)
    {
        free(temp);
        h=NULL;
    }
    else
    {
        h=h->next;
        printf("%d %s %s %s\n",temp->ID,temp->name,temp->branch,temp->aos);
        free(temp);
        h->prev=NULL;
    }
    count--;
    return ;
}


void main()
{
    int ch,i,n;
    h=NULL;
    temp=temp1=NULL;
    printf("******IMPLEMENTATION OF DLL******\n");
    printf("\n 1.Create a DLL of n prof. data\n");
    printf("\n 2.Display from beg with count\n");
    printf("\n 3.Insert at end-used to demonstrate stack\n");
    printf("\n 4.Delete at end-used to demonstrate stack\n");
    printf("\n 5.Insert at beg used to demonstrate dequeue\n");
    printf("\n 6.Delete at beg-used to demonstrate dequeue\n");
    printf("\n 7.Exit\n");
    while(1)
    {
        printf("\n Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter no. of professors:\n");
            scanf("%d",&n);
            for(i=0;i<n;i++)
             insertend();
             break;
              
              case 2:
              displaybeg();
              break;

              case 3:
              insertend();
              break;

              case 4:
              deleteend();
              break;

              case 5:
              insertbeg();
              break;

              case 6:
              deletebeg();
              break;

              case 7:
              exit(0);
              break;

              default: printf("WRONG CHOICE\n");
              

        }
    }


return ;
}