#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* left,*right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildtree(node* root)
{
    cout<<"Enter the data"<<endl;
    int val;
    cin>>val;
    root = new node(val);
    if (val==-1)
    return NULL;
    cout<<"Enter the left data of "<<root->data<<endl;
    root->left = buildtree(root->left);
    cout<<"Enter the right data of "<<root->data<<endl;
    root->right = buildtree(root->right);
    
}
node* binary_search(node* root,int key)
{
    if (root==NULL or root->data == key)
    return root;
    else if (root->data < key)
    {
        return binary_search(root->right,key);
    }
    else
    return binary_search(root->left,key);
}


int main()
{
    node* root=NULL;
    root = buildtree(root);
    cout<<"Enter the number to search"<<endl;
    int key;
    cin>>key;
    root = binary_search(root,key);
    cout<<root->data<<endl;
}