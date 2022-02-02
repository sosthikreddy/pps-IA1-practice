#include<stdio.h>
int input()
{
  printf("enter the number\n");
  int a;
  scanf("%d",&a);
  return a;
}
int add(int *a,int *b)
{
  int c;
  c=*a+*b;
  printf("sum of %d+%d",*a,*b);
  return c;
}
int output(int *g)
{
  printf(" is %d",*g);
}
int main()
{
  int x,y,z;
  x=input();
  y=input();
  z=add(&x,&y);
  output(&z);
  return 0;
}