
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};


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
    int pos,i=1;
    temp=head;
    printf("\nenter position to insert node\n");
    scanf("%d",&pos);
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data\n");
    scanf("%d",&newnode->data);
    i=1;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    
    newnode->next=temp->next;
    temp->next=newnode;
    linkedlist(head);

    

}




