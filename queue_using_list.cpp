#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
}*front=NULL ,*rear = NULL ,*newnode;
void enqueue(){
    newnode = new node();
    cout<<"ENTER NUMBER"<<endl;
    cin>>newnode->data;
    newnode->next=0;
    if (front==NULL){
        front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=rear->next;
    }

}
void dequeue(){
    if (front==NULL && rear==NULL)
    cout<<"Queue is EMPTY"<<endl;
    else{
        cout<<"element "<<front->data<<"dequeued"<<endl;
        node* temp = front;
        front=front->next;
        free(temp);
    }
}

void isempty()
{
    if (front==NULL and rear==NULL)
    cout<<"True"<<endl;
    else
    cout<<"False"<<endl;
}
void display()
{
    node* temp = front;
    while (temp!=rear->next)
    {
        cout<<temp->data<<endl;
        temp =temp->next;
    }
}

int main()
{
    int choice=0;
    while(choice!=5){
    cout<<"1.Enqueue"<<endl<<"2.Dequeue"<<endl<<"3.isempty"<<endl<<"4.Display"<<endl<<"5.exit"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            isempty();
            break;
        case 4:
            display();
            break;
        case 5:
            return 0;
        }
    }
}