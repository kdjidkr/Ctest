#include <stdio.h>
#pragma warning(disable:4996)

int main(){
  int n;
  scanf("%d", &n);

  int i,j;
  for (i = n; i > 0; i--){
    for(j = 1; j <= n-i; j++)
      printf(" ");
    for(j = 1; j <= i; j++)
      printf("*");
    printf("\n");
  }
}
