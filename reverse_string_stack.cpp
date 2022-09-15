#include<iostream>
using namespace std;
int top=-1;
int stack[100];
string rev="";
void push(char x){
    if (top==100)
    cout<<"stack is full"<<endl;
    else{
        top++;
        stack[top]=x;

    }

}
void pop(int n){
    if (top==-1)
    cout<<"stack is empty"<<endl;
    else{
        rev+=stack[top];
        top--;
    }
}


void reverse(string name){
    int i;
    for (i=0;i<name.length();i++)
    {
        push(name[i]);
    }
    for (i=top;i>=0;i--)
    {
        pop(name.length());
    }
    cout<<rev<<endl;
    
}
int main(){
    string name;
    cin>>name;
    reverse(name);
}