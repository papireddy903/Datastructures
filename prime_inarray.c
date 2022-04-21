#include<stdio.h>
int main()
{
int n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int i,a[n],count=0,j;
    printf("enter the elements of array\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        for (j=1;j<=a[i];j++)
        {
            if (a[i]%j==0)
            count++;
        }

        if (count==2)
        printf("%d ",a[i]);
        count=0;

        
    }
   

    
}