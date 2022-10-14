#include<stdio.h>
void bubble_sort(int size,int arr[]);
for(int step=0;step<size-1;step++)
    {
    for(int i=0;i<size-step-1;i++)

   if(arr[j]>arr[j+1])
          temp=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;
}
}
void main()
{
   int arr[30],i,j,n;
   printf("Enter the range of Arr: ");
   scanf("%d",&n);
   if(n<50)
   {
   printf("Enter the elements of Array: ");
   for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
    }
bubble_sort(arr,n);
printf("sorted array");
for(i=0;i<n;i++)
    printf("%d",arr[i]);
}
