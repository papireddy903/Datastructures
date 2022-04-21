#include<stdio.h>
int main()
{
    
    int a[]={1,2,3,4,5};
    int i,j,k;
    int n=sizeof(a)/sizeof(a[0]);
    for (i=1;i<n;i++)
    {
        for (j=i;j<n;j++)
        {
            for (k=i;k<=j;k++)
            printf("%d ",k);
            printf("\n");
        }
        printf("\n");
    }
}