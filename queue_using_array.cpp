#include<iostream>
using namespace std;
int front=-1,rear = -1;
int queue[10];
bool isempty()
{
    if (front==rear==-1)
    return true;
    else
    return false;
}
bool isfull()
{
    if (rear==9)
    {
        return true;
    }
    else
    return false;
}
void enqueue(){
    if (isfull())
    {
        cout<<"Queue is Full"<<endl;
    }
    else{
        rear++;
        front=0;
        int x;
        cout<<"enter the value to enqueue"<<endl;
        cin>>x;
        queue[rear]=x;
    }
}
void dequeue()
{
    if (isempty())
    cout<<"Queue is Empty"<<endl;
    else{
        cout<<queue[front]<<" dequeued"<<endl;
        front++;
    }
}
void display()
{

    for (int i=front;i<=rear;i++)
    {
        cout<<queue[i]<<endl;
    }
}
int main()
{
    int choice=0;
    while(choice!=7){
    cout<<"1.Enqueue"<<endl<<"2.Dequeue"<<endl<<"3.isempty"<<endl<<"4.isfull"<<endl<<"5.Display"<<endl<<"6.exit"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:{
            int ans=isempty();
            if (ans==1){
                cout<<"True"<<endl;
            }
            else
            cout<<"False"<<endl;
            break;}
        case 4:{
            int ans1=isempty();
            if (ans1==1){
                cout<<"True"<<endl;
            }
            else
            cout<<"False"<<endl;
            break;}
        case 5:
            display();
            break;
        case 6:
            return 0;}
    }
}