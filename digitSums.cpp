#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int convert(char val) {
    switch (val)
    {
    case '1':
        return 1;
    case '2':
        return 2;
    case '3':
        return 3;
    case '4':
        return 4;
    case '5':
        return 5;
    case '6':
        return 6;
    case '7':
        return 7;
    case '8':
        return 8;
    case '9':
        return 9;
    default:
        return 0;
    }
}

int main()
{
  char n[256];
  if (scanf("%s", n) == -1) return -1;

  int i, charSum = 0;
  for(i = 0; i < strlen(n); i++) {
    charSum += convert(n[i]);
  }
  printf(atoi(n) % charSum == 0 ? "Yes\n" : "No\n");
  return 0;
}