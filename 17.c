#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 1; n>=i; n--)
  {
    printf("%d\n",n);
  }
}