#include<stdio.h>
int TH(int n,char A, char B,char C)
{
  if(n==0)
  return 1;
  TH(n-1,A,C,B);
  printf("%d",n);
  TH(n-1,C,B,A);
}
  void main()
  {
     TH(3,'A','B','C');
  }
