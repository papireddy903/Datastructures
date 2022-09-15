#include <stdio.h>
#include <stdlib.h>

struct node
{
  int code;
  int price;
  struct node *next;
};
struct node *head = NULL;

void add();
void delet();
void display();

int main()
{
  struct node *head;
  int n;
  while(5)
  {
    printf("\n1.Add an item\n2.Delete an item\n3.Display the items\n");
    printf("\nEnter your choice\n");
    scanf("%d",&n);
    
    switch(n)
    {
      case 1: 
            add(); 
            break;
      case 2: 
            delet();    
            break;
      case 3: 
            display(); 
            break;
      default:  
            printf("\nPlease enter the valid number!");
            exit(0);
    }
  }
}

void add()
{
  struct node *New,*p;
  printf("\nEnter the code and price of item\n");
  scanf("%d%d",&New->code,&New->price);
  New->next = NULL;
  
  if(head == NULL)
    head = New;
  else
  {
    p = head;
    while(p->next != NULL)
        p = p->next;
        
    p->next = New;
  }
}

void delet()
{
  int del;
  printf("\nEnter the element to delete\n");
  scanf("%d",&del);
  
  struct node *p;
  p = head;
  while(p->code != del && p != NULL)
      p = p->next;
    
   p->price = 0;
}

void display()
{
  struct node *p;
  p = head;
  
  while(p != NULL)
  {
    printf("%d  %d\n",p->code,p->price);
    p = p->next;
  }
}