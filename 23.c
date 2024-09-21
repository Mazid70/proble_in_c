#include <stdio.h>
int main()
{
  int a, b = 1;
  scanf("%d", &a);
  while (a > 9)
  {
    a /= 10;
    b++;
  }
  printf("Total digit=%d", b);
}