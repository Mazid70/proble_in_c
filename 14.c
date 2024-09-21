#include <stdio.h>
int main()
{
  char alpha;
  scanf("%c", &alpha);
  if (alpha >= 'a' && alpha <= 'z' || alpha >= 'A' && alpha <= 'Z')
    printf("Alphabet");
  else if (alpha >= '0' && alpha <= '9')
    printf("Number");
  else
    printf("special");
}