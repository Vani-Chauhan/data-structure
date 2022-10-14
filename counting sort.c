#include<stdio.h>
void countingsort(int arr1[], int size)
{
    int arr2[20];
    int max=arr1[0];
    for(int i=1;i<size;i++)
    {
        if(arr1[i]>max)
            max=arr1[i];
    }
    int count[10];
    for(int i=1;i<=max;++i)
    {
        count[i]=0;
    }
    for(int i=0;i<size;i++)
    {
        count[arr1[i]]++;
    }
    for(int i=1;i<=max;i++)
    {
        count[i]+=count[i-1];
    }
    for(int i=size-1;i>=0;i--)
    {
        arr2[count[arr1[i]]-1]=arr1[i];
        count[arr1[i]]--;
    }
    for(int i=0;i<size;i++)
    {
        arr1[i]=arr2[i];
    }
}
void printArray(int arr1[],int size)
{
    for(int i=0;i<size;++i)
    {
        printf("%d",arr1[i]);
    }
    printf("\n");
}
int main()
{
    int arr1[]={4,2,2,28,3,3,1};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    countingsort(arr1,n);
    printArray(arr1,n);
}
