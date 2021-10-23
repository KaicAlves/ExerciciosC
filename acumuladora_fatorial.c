#include <stdio.h>

int main(){
  int acu=1,i,n;

  printf("n! --> Digite n (n deve ser inteiro): ");
  scanf("%i", &n);

  for(i=1;i<=n;i++){
    acu = acu * i;
  }
  printf("%i! = %i",n,acu);
}