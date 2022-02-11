#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
  srand(time(NULL));

  int linhas, colunas, i, j;
  int** matriz;

  printf("Digite a quantidade de Linhas da sua Matriz\n");
  scanf("%d", &linhas);
  printf("Digite a quantidade de Colunas da sua matriz\n");
  scanf("%d", &colunas);

  matriz = (int **)malloc(linhas*sizeof(int*));

  for(i=0; i<linhas; i++){
    matriz[i] = (int *)malloc(colunas*sizeof(int));
  }

  for(i=0; i<linhas; i++){
    for(j=0; j<colunas; j++){
      matriz[i][j] = rand()%10;
    }
  }

  for(i=0; i<linhas; i++){
    for(j=0; j<colunas; j++){
      printf("%2d ", matriz[i][j]);
    }
    printf("\n");
  }
  printf("Hello World\n");
  return 0;
}
