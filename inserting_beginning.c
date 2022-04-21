#include<stdio.h>
int main()
{
    int a[]={10,20,30,40},num,i;
    int len=sizeof(a)/sizeof(a[0]);
 
  
    
    printf("enter the number you want to insert in the beginning\n");
    scanf("%d",&num);
    
    for (i=len;i>=0;i--)
    {
        a[i+1]=a[i];



    }
    a[0]=num;
  
    
    for (i=0;i<len+1;i++){
    printf("%d ",a[i]);
    }
}