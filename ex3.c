#include <stdio.h>

int NchooseK(int n, int k) {
  if (k == 0) {
    return 1;
  } else if (n == k) {
    return 1;
  } else {
    return NchooseK(n - 1, k - 1) + NchooseK(n - 1, k);
  }
}

int main() {
  int n = 1;
  int k = 1;
  while (1) {
    puts("Enter two integers (for n and k) separated by a space:");
    scanf("%d %d", &n, &k);
    printf("%d\n", NchooseK(n, k));
    if (n == 0 && k == 0) {
      break;
    }
  }
}
