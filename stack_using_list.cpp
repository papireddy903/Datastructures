#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;
}*newnode,*temp,*top = NULL;
void push(){
    newnode = new node();
    cout<<"enter the number to push"<<endl;
    cin>>newnode->data;
    newnode->next = top;
    top =newnode;

}
void pop(){
    if (top==NULL)
    cout<<"stack is empty"<<endl;
    else{
        top = top->next;
    }
}

void display()
{
    temp = top;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}
void peek()
{
    cout<<top->data<<endl;
}

int main()
{
    int choice=0;
    while(choice!=5){
    cout<<"1.push"<<endl<<"2.pop"<<endl<<"3.Display"<<endl<<"4.peek"<<endl<<"5.exit"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            return 0;}
    }

} 