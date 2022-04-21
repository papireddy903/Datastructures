 #include<stdio.h>
 int large(int b[],int size)
 {
     int i;
     int max;
     max=b[0];
     for (i=1;i<size;i++)
     {
         if (b[i]>max)
         max=b[i];
     }
     return max;
 }
  int small(int b[],int size)
 {
     int i;
     int min;
     min=b[0];
     for (i=1;i<size;i++)
     {
         if (b[i]<min)
         min=b[i];
     }
     return min;
 }
 int main(){
 
 
 
 int n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int i,a[n];
    printf("enter the elements of array\n");
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);

    int max=large(a,n);
    int min=small(a,n);
    printf("%d\n",max);
    printf("%d\n",min);


   
 }
