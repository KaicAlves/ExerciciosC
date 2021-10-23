#include "stdio.h"
#include "stdlib.h"
#include "locale.h"

int main(){
  setlocale(LC_ALL, "Portuguese");

  int a,b,c,d;
  int dec = 0;

  printf("Digite um algarismo por linha\nPressione ENTER após cada algarismo\nDigite um número binario de até 4 algarismos : ");
  scanf("%i%i%i%i", &a,&b,&c,&d);

  if(a==1){
    dec = dec + 8;
  }
  if(b==1){
    dec = dec + 4;
  }
  if(c==1){
    dec = dec + 2;
  }
  if(d==1){
    dec = dec + 1;
  }
  printf("O valor do binário convertido para decimal é: %i", dec);
}