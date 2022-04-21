//this program is to find the middle element of linked list
//author Papireddy

#include<stdio.h>
#include<stdlib.h>    //stdlib.h for using malloc()function

struct node {
    int data;
    struct node *next;                      //becoz next stores the address of node whose data type is struct node

};

void printlinkedlist(struct node *temp)
{
    struct node* head=temp;
    int count=0;
    while(temp!=0)
    {
        count++;
        printf("%d\n",temp->data);
        temp=temp->next;                                        // 1 2 3 4 5  , 3 is the middle
                                                                    //so run a loop till temp reaches 3
    }
    temp=head;
    
        if (count%2!=0){
    
    for (int i=1;i<count/2+1;i++)
    {
        temp=temp->next;
    }
    printf("\nthe middle element of linked list is %d\n",temp->data);}   // 1 2 3 4 print 3 in this case
    else{
        for (int i=1;i<=count/2;i++)
        {
            temp=temp->next;
        }
        printf("\nthe middle element of linked list is %d\n",temp->data);

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
                                                                 
//if length of linkedlist is odd,then print middle element
//else if length of linked list is even, there are two middle elements print the second middle element
    










// author -> Papireddy
}