#include<stdio.h>
void main()
{
    int a[3][3]={{20,30,40},{50,60,70},{80,90,100}};
    int i,j,*p;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            p=&a[i][j];
            printf("%d\t%d\n",p,*p);
        }
    }
    a[3][3]=a[0][0]+4*((3-0)+3*(3-0));
    int *c[3][3];
    printf("%d",c);

}
