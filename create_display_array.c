#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int i,a[n];
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    for (i=0;i<n;i++)
    printf("%d ",a[i]);
}