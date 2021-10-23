#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  
int i=1, n, atual, anterior, ordenado=1;

printf("Insira a quantidade de números que serão inseridos: ");
scanf("%d", &n);
printf("Insira o primeiro número: ");
scanf("%d", &anterior);

while( (i < n)){
  printf("Insira o próximo número: ");
  scanf("%d", &atual);
  i++;
  if(atual < anterior)
    ordenado = 0;
    anterior = atual;
}
if(ordenado)
  printf("Sequência ordenada!\n");
else
  printf("Sequência não ordenada!\n");
}