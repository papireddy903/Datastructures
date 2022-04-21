#include<stdio.h>
int search(int A[],int size,int find)

{
    int i;
    for (i=0;i<size;i++)
    {
        if (find==A[i])
        return i;
        
    }
   


}


int main()
{
    int n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int i,a[n];
    printf("enter the elements of array\n");
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);

    int key,ind;
    printf("enter the key \n");
    scanf("%d",&key);
    
    int ans=search(a,n,key);
    
    printf("%d\n",ans);
}