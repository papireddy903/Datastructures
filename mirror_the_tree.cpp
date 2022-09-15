#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left,*right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right= NULL;
    }

};

Node* buildtree(Node* root){
    cout<<"Enter the data"<<endl;
    int val;
    cin>>val;
    if (val==-1)
    return NULL;
    root = new Node(val);
    cout<<"Enter the left of "<<root->data<<endl;
    root->left = buildtree(root->left);
    cout<<"Enter the right of "<<root->data<<endl;
    root->right= buildtree(root->right);
}
Node* mirror(Node* root){
    if (root==NULL)
    return NULL;

    mirror(root->left);
    mirror(root->right);
    Node* temp = root->left;
    root->left = root->right;
    root->right = temp;

}

void preorder(Node* root){
    if (root==NULL)
    return ;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    Node* root = NULL;
    root = buildtree(root);
    cout<<"Before Mirroring\n";
    preorder(root);
    
    root = mirror(root);
    cout<<"After mirroring\n";
    preorder(root);
}