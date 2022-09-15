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
bool check_childrensum(node* root){
    if (root==NULL or ((root->left==NULL)and (root->right==NULL)))
    return 1;
    else{
    if ((root->left->data + root->right->data == root->data) and (check_childrensum(root->left)) and (check_childrensum(root->right)))
    return 1;
    else
    return 0;
    }
   
    
}

int main()
{
    node* root = NULL;
    root = buildtree(root);
    cout<<check_childrensum(root)<<endl;
    return 0;
}