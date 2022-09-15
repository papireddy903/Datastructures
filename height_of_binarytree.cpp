#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left,*right;

    Node(int d){
        this->data =d;
        this->left = NULL;
        this->right = NULL;
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
int find_height(Node* root){
    if (root==NULL)
    return 0;
    else{
        int left1 = find_height(root->left);
        int right1= find_height(root->right);
        
        return max(left1,right1)+1;
    }
    
}

int main()
{
    Node* root=NULL;
    root = buildtree(root);
    int height = find_height(root);
    cout<<"Height = "<<height<<endl;
} 

