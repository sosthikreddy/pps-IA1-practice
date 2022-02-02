#include<stdio.h>
typedef struct _complex
{
  int real,imaginary;

}Complex;
Complex input_chellox()
{
  Complex k;
  printf("enter the real and imag\n");
  scanf("%d%d",&k.real,&k.imaginary);
  return k;
}
Complex add(Complex a,Complex b)
{ 
    Complex z;
    z.real=a.real+b.real;
    z.imaginary=a.imaginary+b.imaginary;
    return z;
}
void output(Complex a,Complex b,Complex c)
{
  printf("%d+%di+%d+%di is %d+%di",a.real,a.imaginary,b.real,b.imaginary,c.real,c.imaginary);
}
int main()
{
 Complex a,b,c;
  a=input_chellox();
  b=input_chellox();
  c=add(a,b);
  output(a,b,c);
  return 0;
}