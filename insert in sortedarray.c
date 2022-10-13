#include<stdio.h>
void main()
{
    int a[20],n,num,i;
    printf("Enter the size of Array: ");
    scanf("%d",&n);
    printf("Enter the elements of Array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter number to be inserted: ");
    scanf("%d",&num);
    i=n-1;
    while(num<a[i]&&i>=0)
    {
        a[i+1]=a[i];
        i--;
    }
    a[i+1]=num;
    n++;
    printf("Array after insertion of element:\n ");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
