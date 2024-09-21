#include <stdio.h>
int main()
{
  float a, b, c;
  scanf("%f%f%f", &a, &b, &c);
  if (a > b && a > c)
    printf("%f is big number", a);
  else if (b > a && b > c)
    printf("%f is big number", b);
  else
    printf("%f is big number", c);
}