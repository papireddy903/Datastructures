#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->left= NULL;
        this->right=NULL;
    }
};

node* buildtree(node* root){
    cout<<"Enter the data:"<<endl;
    int data;
    cin>>data;
    root= new node(data);
    if (data==-1)
    return 0;
    cout<<"Enter the left data of "<<root->data<<endl;
    root->left = buildtree(root->left);
    cout<<"Enter the right data of "<<root->data<<endl;
    root->right = buildtree(root->right);

}
void inorder(node* root){
    if (root==NULL)
    return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node* root){
    if (root==NULL)
    return ;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    if (root==NULL)
    return ;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    node* root = NULL;
    root = buildtree(root);
    cout<<"Inorder Traversal-> "<<" ";
    inorder(root);
    cout<<"Preorder Traversal-> "<<" ";
    preorder(root);
    cout<<"Post order Traversal ->"<<" ";
    postorder(root);
    
    return 0;
}