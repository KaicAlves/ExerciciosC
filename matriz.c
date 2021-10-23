#include <stdio.h>
#include <locale.h>

int main(){
  
  setlocale(LC_ALL, "Portuguese");
  
  int i,j,k;
  int S[2][3], T[3], W[2];

  printf("\nInsira a quantidade de air bags do tipo D que foram instalados em cada modelo de veículo (A,B,C) e, em seguida, de air bags do tipo E: ");
  for(i=0;i<2;i++){
    for(j=0;j<3;j++){
      scanf("%i", &S[i][j]);
    }
  }
  
  printf("\nInsira a quantidade produzida de cada tipo de veículo (A,B,C) na semana: ");
  for(i=0;i<3;i++){
    scanf("%i", &T[i]);
  }

  for(i=0;i<2;i++){
    W[i] = 0;
    for(k=0;k<3;k++){
      W[i] = W[i] + (S[i][k] * T[k]);
      }
  }
    
  for(i=0;i<2;i++){
    if(i==0){
    printf("\nA quantidade de air bags tipo D instalados foram: %i \n", W[0]);
    }
    else
    printf("A quantidade de air bags tipo E instalados foram: %i \n", W[1]);
  }
}