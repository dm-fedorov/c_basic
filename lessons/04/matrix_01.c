#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 5 /* Число строк матрицы */
#define N 10 /* Число столбцов матрицы */

int main()
{
  int a[M][N];
  int i, j;

  for(i = 0; i < M; i++)
    for(j = 0; j < N; j++)
      a[i][j] = rand()%100;

  for(i = 0; i < M; i++){
      for(j = 0; j < N; j++)
        printf("%5d", a[i][j]);
      printf("\n");
  }
  return 0;
}
