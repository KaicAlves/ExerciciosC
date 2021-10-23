#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");

  int i=1;
  int ant,valor,n;

  printf("Insira quantos números serão inseridos: ");
  scanf("%i", &n);
  printf("Insira um número: ");
  scanf("%i", &ant);

  while(i<n){
    printf("Insira um número: ");
    scanf("%i", &valor);
    i++;
    if(valor > ant){
      ant = valor;
    }
  }
  printf("O maior valor lido é %i", ant);
}