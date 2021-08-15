#include <stdio.h>

int countWays(int n)
{
  // 종료 조건
  if(n == 1)
    return 1;
  if(n == 2)
    return 2;
  
  int a = 1, b = 2, c;
  for(int i = 3; i <= n; i++) {
    c = a + b;
    a = b;
    b = c;
  }
  return c;
}

int main()
{
  printf("공간의 가로 길이를 입력하세요 : ");
  int n;
  scanf("%d", &n);
  printf("%dx2 공간에 타일을 놓을 수 있는 경우의 수는 %d입니다.\n", n, countWays(n));
  return 0;
}