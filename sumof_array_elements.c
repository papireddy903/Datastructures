#include<stdio.h>
int main()
{
    int a[]={10,20,30,40};
    int i,sum=0,len=sizeof(a)/sizeof(a[0]);
    printf("array elements are\n");
    for (i=0;i<len;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("the sum of array elements are\n");
    for (i=0;i<len;i++)
    {
        sum=sum+a[i];

    }
    printf("%d\n",sum);
}