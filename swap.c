#include<stdio.h>
void swap(int a, int b);
int main()
{
 int m = 22, n = 44;

 printf(" values before swap m = %d \nand n = %d", m, n);
 swap(m, n);
}
void swap(int a, int b)
{ 
  a = a-b;
  b = a+b;
  a = b-a;
 printf(" \nvalues after swap m = %d\n and n = %d", a, b);
}
