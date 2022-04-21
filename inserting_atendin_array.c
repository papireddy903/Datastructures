#include<stdio.h>
int main()
{
    int a[]={10,20,30,40};
    int i,num,len=sizeof(a)/sizeof(a[0]);
    
    printf("enter the number you want to insert at end\n");
    scanf("%d",&num);
    a[len]=num;
    
    for (i=0;i<len+1;i++)
    {
        printf("%d ",a[i]);
    }
}