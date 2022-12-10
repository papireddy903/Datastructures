#include<iostream>
using namespace std;
void swapped(int *x , int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int partition(int a[],int l,int h){
    int i =l ,j = h;
    int pivot = a[l];
    while(i<j){
        while(a[i]<=pivot)
        i++;
        while(a[j]>pivot)
        j--;
        if (i<j)
        swapped(&a[i],&a[j]);

    }
    if (i!=j)
    swapped(&a[l],&a[j]);
    return j;
}
void quicksort(int a[],int l,int h){
    if (l<h){
        int j = partition(a,l,h);
        quicksort(a,l,j-1);
        quicksort(a,j+1,h);
    }
}
void display(int a[],int n){
    for (int k = 0;k < n; k++)
    cout<<a[k]<<" ";
}
int main(){
    int n;
    cout<<"enter the size"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter data"<<endl;
    for (int m = 0;m<n;m++)
    cin>>a[m];
    cout<<"original array"<<endl;
    for (int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    cout<<"sorted array\n";
    quicksort(a,0,n-1);
    display(a,n);
}