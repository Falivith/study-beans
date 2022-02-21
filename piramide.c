#include <stdio.h>

int main(){

    int inicio;
    int i, j, h, maior, menor;

  do{
    printf("Digite o número máximo de componentes do triângulo inverso\n");
    scanf("%d", &inicio);
    }while(!(inicio%2) || inicio<0);

    maior = inicio; //guarda o maior número da sequência
    menor = 1;  //guarda o  menór número da sequência

    for(i=0; i<inicio; i++){ //repete 5 vezes (5 linhas)
      printf("\n");

      for(h=0; h<menor; h++) //acerta os espaços
        printf("  ");

      for(j=0; j<maior; j++){ //repete 5, 4, 3...
        printf("%d ", j+menor); //começa por 1, 2, 3...
      }
      maior=maior-2; //reduz em 2 digitos toda vez
      menor++;
    }
}