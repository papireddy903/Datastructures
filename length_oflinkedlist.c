#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void printlinkedlist(struct node* temp)
{
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void getlength(struct node* temp)
{
    int count=0;
    while(temp!=0)
    {
        count++;
        temp=temp->next;
    }
    printf("\nthe length of the linked list is %d\n",count);
}
int main()
{
    int n;
    scanf("%d",&n);
    
    struct node *temp,*head,*newnode;
    head=0;
    while(n--)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    
    printf("enter data\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if (head==0) head=temp=newnode;
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
    }
    printf("the linked list data is\n");
    printlinkedlist(head);
    
    
    getlength(head);
    
}