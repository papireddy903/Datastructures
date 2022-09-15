#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left,*right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right= NULL;
    }
};
node* build_bst(node* root,int a[],int l,int r){
   
    while(l<=r){
        int mid = (l+r)/2;
        root = new node(a[mid]);
        build_bst(root->left ,a,l,mid-1);
        build_bst(root->right,a,mid+1,r);

    
}
return root;}
void preorder(node* root){
    if (root==NULL)
    return ;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}



int main()
{
    node* root = NULL;
    int n;
    cin>>n;
    int a[n];
    cout<<"enter elements"<<endl;
    for (int i=0;i<n;i++)
    cin>>a[i];
    for (int i = 1;i<n;i++)
    {
        int key = a[i];
        int j = i-1;
        while(j>=0 and a[j]>key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
    for (int k=0;k<n;k++)
    cout<<a[k]<<" ";
    root = build_bst(root,a,0,n-1);
    preorder(root);
}