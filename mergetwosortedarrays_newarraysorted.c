#include<stdio.h>

int main()
{
    int m,n;
    printf("enter the size of two arrays\n");
    scanf("%d%d",&m,&n);
    printf("enter the elements of array 1 in sorted order\n");  
    int i,a[m],b[n],c[n+m];
    for (i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the elements of array 2 in sorted order\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    int ans[n+m],j;
    for (i=0;i<m;i++)
    {
        c[i]=a[i];
    }
    for (j=m;j<m+n;j++)
    c[j]=b[j];

    for (i=0;i<n+m;i++)
    printf("%d ",c[i]);



}