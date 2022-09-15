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

bool check_symmetry(node* p,node* q){
    if (p==NULL and q==NULL)
    return true;
    else{
        return (p->data==q->data and check_symmetry(p->left,q->right) and check_symmetry(q->left,p->right));
    }

    
    
}

int main()
{
    node* root = NULL;
    root = buildtree(root);
    if (check_symmetry(root,root)==1){
        cout<<"yes,it's a symmetric tree";
    }
    else{
        cout<<"Not a symmetric tree";
    }
    return 0;
}