#include<stdio.h>
void main()
{
   int A[10],B[10],c[20],n,m,i,j,k=0;
   printf("enter number of elements in A: ");
   scanf("%d",&n);
   printf("\nEnter elements of A:\n");
   for(i=0;i<n;i++)
   scanf("%d",&A[i]);
   printf("\nenter number of elements in B:\n ");
   scanf("%d",&m);
   printf("\nenter elements of B: ");
   for(j=0;j<m;j++)
   scanf("%d",&B[j]);
i=0;j=0;
   while(i<n&&j<m)
   {
       if(A[i]<B[j])
       {
       c[k]=A[i];
       j++;
       k++;
       }
       else if(A[i]>B[j])
       {
       c[k]=B[j];
       i++;
       k++;
       }
       else if(A[i]==B[j])
       {
           c[k]=A[i];
           i++;
           j++;
           k++;
       }
   }
   while(i<n)
   {
     c[k]=A[i];
     i++;
     k++;
   }
   while(j<m)
   {
      c[k]=B[j];
      j++;
      k++;
   }
   printf("Array c is: ");
   for(i=0;i<k;i++)
   {
   printf("%d",c[i]);
   printf("\n");
}
}
