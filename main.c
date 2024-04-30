#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void maior (int x, int y, int *resp);

main(){
  int num[2], x, res;
  for(x = 0; x < 2; x++){
    printf("Digite o %iº valor: ", x + 1);
    scanf("%i", &num[x]);
    getchar();
  }
  maior(num[0], num[1], &res);
  printf("O maior número é: %i", res);
  getchar();
}

void maior (int x, int y, int *resp){
  if(x > y){
    *resp = x;
  }
  else{
    *resp = y;
  }
}