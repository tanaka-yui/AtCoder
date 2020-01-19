#include <stdio.h>

int main()
{
  int n, m, i, l, r = 0;
  if (scanf("%d %d", &n, &m) == -1) return -1;
  int left = 1;
  int right = 1000000;
  for(i = 0;i < m;i++) {
    if (scanf("%d %d", &l, &r) == -1) return -1;
    if (left < l) left = l;
    if (right > r) right = r;
  }
  int ans = right - left + 1;
  printf("%d\n", ans < 0 ? 0 : ans);
  return 0;
}