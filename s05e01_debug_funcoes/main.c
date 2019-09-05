#include <stdio.h>

int soma(int a, int b){
  int result = a + b;
  a = a + 1;
  puts("oi");
  return result;
}

int main() {
  int a = 3;
  int b = 5;
  puts("tchau");
  int c = soma(a, b);
  puts("baby");
  printf("%d\n", c);
  return 0;
}