#include "stdio.h"
#include "stdlib.h"
#include "locale.h"

int main(){
	setlocale(LC_ALL, "Portuguese");

  int a,b,c,d;
  int a1,b1,c1;
  int f,f1;

  printf("Digite um algarismo por linha\nUtilizar zero, caso desejar ignorar a casa\nPressione ENTER após cada algarismo\nDigite um número decimal de até 4 algarismos : ");
  scanf("%i%i%i%i", &a,&b,&c,&d);

  a1 = a * 1000;
  b1 = b * 100;
  c1 = c * 10;

  f = a1+b1+c1+d;

  if(f>0){
    f1 = f/2;
      if(f%2 == 0){
      printf("0");
  }
  else
    printf("1");
  while(f>0 && f!=1){
		f = f/2;
    if(f%2 == 0){
			printf("0");
		}
    else
		printf("1");
	}
}
  printf("\nLeia o número impresso de trás para frente");
}