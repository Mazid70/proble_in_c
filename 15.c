#include <stdio.h>
int main()
{
  char alpha;
  scanf("%c", &alpha);
  alpha >= 'A' && alpha <= 'Z' ? printf("%c is Uppercase", alpha)
                               : printf("%c is Lowercase", alpha);
}