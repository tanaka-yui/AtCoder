#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a, b;
  if (scanf("%d %d", &a, &b) == -1) return -1;
  printf("%d\n", (int)(((double)(a + b) / 2) + 0.5));
  return 0;
}