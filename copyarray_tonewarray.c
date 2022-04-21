#include<stdio.h>

    
    


int main()
{
    int n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int i,a[n];
    printf("enter the elements of array\n");
    int b[n];
    for (i=0;i<n;i++){
    scanf("%d",&a[i]);
    b[i]=a[i];
    }
    for (i=0;i<n;i++)
    printf("%d ",b[i]);

   

}