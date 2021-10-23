#include <stdio.h>

int main(){
  int a,i,j,vetor1[5],vetor2[5];

  for(i=0;i<5;i++){
    printf("Insira os elementos do 1º vetor: ");
    scanf("%i", &vetor1[i]);
  }
  for(j=0;j<5;j++){
    printf("Insira os elementos do 2º vetor: ");
    scanf("%i", &vetor2[j]);
    for(i=0;i<5;i++){
      if(vetor1[i]==vetor2[j])
      a=1;
    }
  }
  if(a!=1)
  printf("\nNão há elementos iguais");
  else
  printf("\nHá elementos iguais");
}