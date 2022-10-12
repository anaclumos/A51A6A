#include <stdio.h>

int add(int x, int y) { return x + y; }

int main() {
  printf("Hello World\n");
  printf("1 + 2 = %d \n", add(1, 2));
  return 0;
}