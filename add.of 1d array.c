#include<stdio.h>
void main()
{
    int a[5]={15,90,60,70,15};
    int i,*p;
    a[5]=a[0]+(4*(5-0));
    printf("%d\n",&a[5]);
    for(i=0;i<5;i++)
    {
        p=&a[i];
        printf("%d\t%d\n",p,*p);
    }
        a[5]=a[0]+(4*(5-0));
    printf("%d\n",&a[5]);
}
