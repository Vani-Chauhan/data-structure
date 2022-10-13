#include <stdio.h>
void main()
 {
     int arr[20],n,i,j,num;
     printf("\n Enter the number of elements in the array : ");
     scanf("%d",&n);
     printf("Enter elements of array:\n");
   for(i=0;i<n;i++)
   {
     scanf("%d",&arr[i]);
   }
     printf("\n Enter the element to be deleted: ");
     scanf("%d",&num);
     for(i=0;i<n;i++)
     {
        if(arr[i]==num)
          {
             for(j=i;j<n;j++)
               {
                  arr[j]=arr[j+1];
               }
          }
     }
          printf("\n The array after deletion is:\n");
          for(i=0;i<n-1;i++)
          {
              printf("%d\n",arr[i]);
          }
 }
