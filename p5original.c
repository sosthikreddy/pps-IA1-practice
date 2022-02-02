#include<stdio.h>
#include<math.h>
float input()
{
  float a;
  printf("Enter the value");
  scanf("%f",&a);
  return a;
}
float my_sqrt(float n)
{
  return sqrt(n);
}
void output(float n,float sqrt_result)
{
  printf("The square root of %f is %f",n,sqrt_result);
}
int main()
{
  float a,sq;
  a=input();
  sq=my_sqrt(a);
  output(a,sq);
  return 0;
}