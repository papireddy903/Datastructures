#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int ans1;
        if (b<c){
            ans1 = 2*(c-b);
        }
        else
        ans1 = b-1;
        int ans2 = a-1;
        if (ans1==ans2)
        cout<<"3"<<endl;
        else if (ans1>ans2){
            cout<<"1"<<endl;
        }
        else
        cout<<"2"<<endl;
    }
}