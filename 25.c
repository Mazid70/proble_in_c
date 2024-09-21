#include <stdio.h>
int main()
{
  int a,first,last;
  scanf("%d", &a);
  last=a%10;
  while (a > 9)
  {
    a /= 10;
    
  }
  first=a;
  printf("first digit %d last digit %d their sum=%d", first,last,first+last);
}