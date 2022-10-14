#include<stdio.h>
void main()
{
  int a[10],n,i,j,k,t;
  printf("Enter the size of array: ");
  scanf("%d",&n);
  if(n<10)
  {
      printf("\nEnter array elements: ");
      for(i=0;i<n;i++)
        scanf("%d",&a[i]);
  }
  for(j=0;j<n-1;j++)
  {
      k=j+1;
      while(k>0&&a[k-1]>a[k])
      {
          t=a[k-1];
          a[k-1]=a[k];
          a[k]=t;
          k--;
      }
  }
  printf("\nPrint the sorted array: ");
  for(i=0;i<n;i++)
    printf("%d\n",a[i]);
}
