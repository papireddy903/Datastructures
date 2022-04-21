#include<stdio.h>
int main()
{
    int a[]={10,20,40,50};
    int len=sizeof(a)/sizeof(a[0]);
    int i,ind,num;
    printf("enter the number you want to insert\n");
    scanf("%d",&num);
    printf("enter the index no\n");
    scanf("%d",&ind);
    for (i=len-1;i>=ind;i--)
    {
        a[i+1]=a[i];

    }
    a[ind]=num;
    len++;
    for (i=0;i<len;i++)
    {
        printf("%d ",a[i]);
    }

}