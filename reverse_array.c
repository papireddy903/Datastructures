#include<stdio.h>
int main(){
 
 
 
 int n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int i,a[n];
    printf("enter the elements of array\n");
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    int temp=0;

    for (i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }

    for (i=0;i<n;i++)
    printf("%d ",a[i]);

}