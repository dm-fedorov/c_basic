#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 3 /* Число строк матрицы */
#define N 4 /* Число столбцов матрицы */

int main()
{
  int m[M][N] = {{1, 2, 3, 4}, {11, 12, 13, 14}, {21, 22, 23, 24}};
  /*
  int m[3][4] = {1, 2, 3, 4, 11, 12, 13, 14, 21, 22, 23, 24};
  */
  
  int i, j;

  for(i = 0; i < M; i++){
      for(j = 0; j < N; j++)
        printf("%5d", m[i][j]);
      printf("\n");
  }
  return 0;
}
