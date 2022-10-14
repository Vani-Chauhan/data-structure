#include<stdio.h>
int power(int n,int p,int a[])
{
int flag=0;
int i,j;
for (i=0;i<p;i++)
{
   for (j=0;j<n;j++)
      {
          if(i&(1<<j))
        {
            printf("%d",a[j]);
        }
      }
      printf("\n");
}
}
void main()
{
    int n,a[10],p,i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    p=pow(2,n);
    printf("The number of elements in power sets are: ");
    printf("%d\n",p);
    printf("Elements in the power sets are:\n");
    power(n,p,a);
}


