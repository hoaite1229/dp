#include <stdio.h>

int countWays(int n)
{
  // 종료 조건
  if(n % 2 != 0)
    return 0;
  if(n == 0)
    return 1;
  if(n == 2)
    return 3;

  int a = 3, b, cum = 1;
  for(int i = 4; i <= n; i += 2) {
    b = a * 3 + 2 * cum;
    cum += a;
    a = b;
  }
  return b;
}

int main()
{
  printf("공간의 가로 길이를 입력하세요 : ");
  int n;
  scanf("%d", &n);
  printf("3x%d 공간에 타일을 놓을 수 있는 경우의 수는 %d입니다.\n", n, countWays(n));
  return 0;
}