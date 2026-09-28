#include <stdio.h>

int main() {
  int r, c;
  printf("Enter the number of rows(r): ");
  scanf("%d", & r);
  printf("Enter the number of columns(c): ");
  scanf("%d", & c);

  int a[r][c], b[r][c];

  printf("\nEnter elements of 1st matrix:\n");

  for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j) {
      printf("Enter element a[%d][%d]: ", i + 1, j + 1);
      scanf("%d", & a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j) {
      printf("Enter element b[%d][%d]: ", i + 1, j + 1);
      scanf("%d", & b[i][j]);
    }
  int sum[r][c];
  for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] - b[i][j];
    }
  printf("\nSum of two matrices: \n");
  for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == c - 1) {
        printf("\n\n");
      }
    }

  return 0;
}