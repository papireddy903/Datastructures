//Now we are writing code to insert a data in the beginning of existing linked list

//first create a linked list

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

void afterinsertion(struct node *temp)
{
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void linkedlist(struct node *temp){
    
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    struct node *head,*temp,*newnode;
    head=0;
    while(n--)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data\n");
    scanf("%d",&newnode->data);
    newnode->next=0;

    if (head==0)
    {
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
    }
    linkedlist(head);
    newnode=(struct node*)malloc(sizeof(struct node));


    printf("\nenter the data you want to insert at end\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    
    afterinsertion(head);
    

}


