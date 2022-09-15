#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int d){
        this->data = d;
        this->next = NULL;
    }
}*head=NULL,*temp,*newnode;

void insertion()
{
    int value;
    cout<<"\n1.At beg  2.At end   3.position\n";
    int opi;
    cin>>opi;
    if (opi==1)
    {
        cout<<"enter data"<<endl;
        cin>>value;
        
    }
}

int main(){
    int choice=1;
    while (choice!=0){
    cout<<"Enter the data\n";
    int val;
    cin>>val;
    newnode = new node(val);
    if (head==NULL)
    head= temp =newnode;
    else{
        temp->next = newnode;
        temp = newnode;
    }
    cout<<"one more node?(0/1)"<<endl;
    cin>>choice;

    }
    int op;
    cout<<"\n1.Insertion   2.Deletion  3.Display   4.exit\n";
    cin>>op;
    switch(op)
    {
        case 1:
            insertion();
            break;
        case 2:
            deletion();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
    }
    

}