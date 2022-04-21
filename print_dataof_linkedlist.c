//today we see the code to print the data of linked list in c program

#include<stdio.h>
#include<stdlib.h>    //stdlib.h for using malloc()function

struct node {
    int data;
    struct node *next;                      //becoz next stores the address of node whose data type is struct node

};

void printlinkedlist(struct node *temp)
{
    //we do it later 
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

int main()
{
    struct node *head,*newnode,*temp;
    head=0;
    int choice;
    while(choice){
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
        temp=newnode;                              //here head pointer value is updating but that not had to happen, so we take a temp pointer
    }
    printf("would you like to add one more new node(0/1)?\n");
    scanf("%d",&choice);
    }
    printf("\nthe data of linked list is\n");
    printlinkedlist(head);                        //we are giving parameter head to temp to update it to head value
}

// author -> Papireddy