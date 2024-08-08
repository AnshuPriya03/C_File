#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *llink;
    struct node *rlink;
};
typedef struct node *NODE;
NODE create(int item,NODE root)
{
    NODE temp,cur,prev;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->info=item;
    temp->llink=NULL;
    temp->rlink=NULL;
    if(root==NULL)
    return temp;
    prev=NULL;
    cur=root;
    while(cur!=NULL)
    {
        prev=cur;
        if(item<cur->info)
        cur=cur->llink;
        else
        cur=cur->rlink;
    }
    if(item<prev->info)
    prev->llink=temp;
    else
    prev->rlink=temp;
    return root;
}
NODE search(int item,NODE root)
{
    NODE cur;
    if(root==NULL)
    return NULL;
    cur=root;
    while(cur!=NULL)
    {
        if(item==cur->info)
        return cur;
        if(item<cur->info)
        cur=cur->llink;
        else cur=cur->rlink;
    }
    return NULL;
}
void inorder(NODE root)
{
    if(root==NULL)
    return;
    inorder(root->  llink);
    printf("%d",root->info);
    inorder(root->rlink);
}
void preorder(NODE root)
{
    if(root==NULL)
    return;
    printf("%d",root->info);
    preorder(root->llink);
    preorder(root->rlink);
}
void postorder(NODE root)
{
    if(root==NULL)
    return;
    postorder(root->llink);
    postorder(root->rlink);
    printf("%d",root->info);
}
void main()
{
    NODE root,cur;
    int ch,item;
    root=NULL;
     while(1)
    {
        printf("\n***BINARY SEARCH TREE***\n");
        printf("1. CREATE\t\t 2.INORDER\n");
        printf("3. PREORDER\t\t 4.POSTORDER\n");
        printf("5. SEARCH\t\t  6.EXIT\n");
       
        printf("Enter the choice\n");
        scanf("%d",&ch);
      
        switch(ch)
        {
            case 1:
            printf("Enter the item to be inserted\n");
            scanf("%d",&item);
            root=create(item,root);
            break;

            case 2:
            if(root==NULL)
            {
                printf("Tree empty\n");
                break;
            } 
            printf("Inorder traversal is:");
            inorder(root);
            break; 

            case 3:
            if(root==NULL)
            {
                printf("Tree empty\n ");
                break;
            }
            printf("Preorder traversal is:");
                preorder(root);
                break;

                case 4:
                if(root==NULL)
                {
                    printf("Tree empty\n");
                    break;
                }
                printf("Postorder traversal is:");
                postorder(root);
                break;

                case 5:
                printf("Enter the item to be searched\n");
                scanf("%d",&item);
                cur=search(item,root);
                if(cur==NULL)
                printf("Item not found\n");
                else
                printf("Item found\n");
                break;
                default:exit(0);
            }
        }

    }
