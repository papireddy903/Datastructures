#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int i,a[n];
    printf("enter the elements of array\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int ind;
    printf("enter the index no of the key you want to delete\n");
    scanf("%d",&ind);
    for (i=ind;i<n;i++)
    {
        a[i]=a[i+1];
        
        
    }
    n--;
    for (i=0;i<n;i++)
    printf("%d ",a[i]);
}