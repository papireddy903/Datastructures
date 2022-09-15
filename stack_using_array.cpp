#include<iostream>
using namespace std;
int top=-1;
int stack[5];


bool isempty(){
    if (top==-1)
    return true;
    else
    return false;
}

bool isfull(){
    if (top==5){
        return true;
    }
    else
    return false;
}
void push(){
    if (isfull())
    cout<<"stack is full"<<endl;
    else{
    int x;
    cout<<"enter the number to push"<<endl;
    cin>>x;
    top++;
    stack[top]=x;
    }
    
}

void pop(){
     if (isempty())
     cout<<"stack is full"<<endl;
     else{
    cout<<stack[top]<<" element popped out"<<endl;
    top--;}
   
    
    
}
void display(){
    int i;
    for (i=top;i>=0;i--)
    {
        cout<<stack[i]<<endl;
    }
}
void peek(){
    cout<<stack[top]<<endl;
}

int main()
{
    int choice=0;
    while(choice!=7){
    cout<<"1.push"<<endl<<"2.pop"<<endl<<"3.isempty"<<endl<<"4.isfull"<<endl<<"5.Display"<<endl<<"6.peek"<<endl<<"7.exit"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
            push();
            break;
        case 2:
            pop();
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
            peek();
            break;
        case 7:
            return 0;}
    }

    



}