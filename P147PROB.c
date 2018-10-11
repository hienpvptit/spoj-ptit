
#include<stdio.h>

int main() {
int n;
  scanf("%d", &n);
  double Sum = 0;
  double temp;
  for (int i = 1; i <= n; i++) {
    scanf("%lf", &temp);
    Sum += temp;
  }
  printf("%.12lf", Sum / n);
    return 0;
}
