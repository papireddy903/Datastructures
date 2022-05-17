// checking whether a singly linkedlist is a palindrome using stack
/* Author : Papireddy
    date  : 17/05/2022 */

//algorithm
/* 1.  create a linkedlist 
   2.  traverse and push the data of linkedlist into the stack
   3.  now again traverse the linkedlist and now pop each element from the stack and compare both */

#include<stdio.h>
#include<stdlib.h>
int stack[100],i=0,top=-1;
int arr[100],count=0;
struct node{
    int data;
    struct node* next;
};


void linkedlist(struct node* temp)
{
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void _isPalindrome(struct node* temp,struct node* final,int n)
{
    while(temp!=0)
    {
        top++;
        stack[top]=temp->data;         // pushing the linkedlist data into the stack
        temp=temp->next;          // 1 2 3 2 1
    }
    for (i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);        // printing the data of stack
    }
    for (i=0;i<n;i++)
    {
        arr[i]=stack[top];              // poping and adding that data into another array for final comparing
        top--;

    }
    
    for (i=0;i<n;i++)
    {
        printf("%d ",arr[i]);          // displaying the popped out data of stack, which is stored in the new array
    }

    for (i=0;i<n;i++)
    {
        if (arr[i]==final->data)
        {
            count++;                     // traversing the linkedlist and comparing it with the popped out values 
            final=final->next;           // count will be equal to no of elements in the linkedlist if it is a palindrome
        } 
    }
    if (count==n)
    printf("palindrome\n");           
    else printf("not  a palindrome\n");
    
    
}

int main()
{
    struct node* head,* newnode,* temp;
    head=0;
    int n;
    printf("enter no of nodes\n");
    scanf("%d",&n);
    int orgnum=n;
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
    
    
    _isPalindrome(head,head,orgnum);

}
// end of the program
// thank you