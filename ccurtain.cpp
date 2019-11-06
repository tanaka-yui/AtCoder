#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a, b;
  if (scanf("%d %d", &a, &b) == -1) return -1;
  int c = a - b * 2;
  printf("%d\n", c < 1 ? 0 : c);
  return 0;
}