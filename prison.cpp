#include <stdio.h>

int main()
{
  int n, m;
  if (scanf("%d %d", &n, &m) == -1) return -1;
  int lr[2][m];
  int i = 0;
  for(i = 0;i < m;i++) {
    if (scanf("%d %d", &lr[0][i], &lr[1][i]) == -1) return -1;
  }
  int left = 1;
  int right = 1000000;
  for(i=0;i<m;i++) {
    if (left < lr[0][i]) left = lr[0][i];
    if (right > lr[1][i]) right = lr[1][i];
  }
  int ans = right - left + 1;
  printf("%d\n", ans < 0 ? 0 : ans);
  return 0;
}