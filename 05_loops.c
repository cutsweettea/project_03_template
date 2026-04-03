#include <stdio.h>

int main(){
  int step;

  while(scanf("%d", &step) != EOF){
    printf("%d\n", Fib(step));
  }
}
