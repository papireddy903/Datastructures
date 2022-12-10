#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&ans,int l,int mid,int r){
    int i,j,k;
    vector<int> b(r-l+1);
    i = l,j = mid+1,k=0;
    while(i<=mid and j<=r){
        if (ans[i]<=ans[j]){
            b[k++] = ans[i++];
            
            
        }
        else{
            b[k++] = ans[j++];
            
        }}
        while(i<=mid){
            b[k++] = ans[i++];
        }
        while(j<=r){
            b[k++] = ans[j++];
        }
        for (int p=l;p<=r;p++)
        ans[p] = b[p-l];
    
    
    
    
}
void display(vector<int>&ans,int n){
    for (int i=0;i<n;i++)
    cout<<ans[i]<<" ";
}
void mergeSort(vector<int> &ans,int l,int r){
    if (l<r){
        int mid=(l+r)/2;
        mergeSort(ans,l,mid);
        mergeSort(ans,mid+1,r);
        merge(ans,l,mid,r);
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> ans;
    int val;
    for (int i =0;i<n;i++){
        cin>>val;
        ans.push_back(val);
    }
    mergeSort(ans,0,ans.size()-1);
    display(ans,n);
}