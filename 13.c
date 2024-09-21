#include <stdio.h>
#include <ctype.h> 
int main()
{
  char n;
  scanf("%c", &n);
  char a=tolower(n);
 a=='a'||a=='e'||a=='i'||a=='o'||a=='u'?
 printf("%c is vowel",a):
 printf("%c is consonent",a);
}