#include<stdio.h>
int main()
{
     int n,even=0,odd=0;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int i,a[n];
    printf("enter the elements of array\n");
    for (i=0;i<n;i++){
    scanf("%d",&a[i]);
    if (a[i]%2==0)
    even++;
    else
    odd++;
    }
    printf("no of even numbers are %d\nno of odd numbers are %d\n",even,odd);

}