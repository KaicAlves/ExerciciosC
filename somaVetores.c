#include <stdio.h>

int main(){
  int i,r=0,vetor1[5],vetor2[5];

  for(i=0;i<5;i++){
    printf("Insira os valores de cada vetor: ");
    scanf("%i %i", &vetor1[i], &vetor2[i]);
    r = r + (vetor1[i]*vetor2[i]);
  }
  printf("O produto interno dos vetores é: %i",r);
}