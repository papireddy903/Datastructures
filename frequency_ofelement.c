#include<stdio.h>
int main()
{

    int size,count=0;
    printf("enter the size of array\n");
    scanf("%d",&size);

    int i,num;
    int a[size];
    for (i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to find frequency\n");
    scanf("%d",&num);

    for (i=0;i<size;i++)
    {
        if (num==a[i])
        count++;
        
    }
    printf("%d",count);

}