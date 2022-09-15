#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left =NULL;
    Node* right = NULL;

    Node(int d){
        this->data = d;
        this->left=  NULL;
        this->right  =NULL;
    }
};

Node* buildtree(Node* root){
    cout<<"Enter the data"<<endl;
    int val;
    cin>>val;
    if (val==-1)
    return NULL;
    root = new Node(val);
    cout<<"Enter the left data of "<<root->data<<endl;
    root->left = buildtree(root->left);
    cout<<"Enter the right data of "<<root->data<<endl;
    root->right = buildtree(root->right);

}
bool check_for_bst(Node* root){
    if (root==NULL)
    return 0;
    if (root->left!=NULL and root->left->data > root->data){
        return 0;
    }
    if (root->right!=NULL and root->right->data < root->data)
    return 0;
    return 1;

}
int main()
{
    Node* root = NULL;
    root = buildtree(root);
    if (check_for_bst(root)==1){
        cout<<"Yes,It's a Binary Search Tree";
    }
    else
    cout<<"Not a Binary search tree";
}