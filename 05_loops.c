#include <stdio.h>

const int FIRST_FIB[] = {0, 1};

int Fib(int step) {
  if(step <= 1) return FIRST_FIB[step];
  int n1 = FIRST_FIB[0];
  int n2 = FIRST_FIB[1];
  int cur = 0;
  for(int i = 2; i <= step; i++) {
    cur = n1 + n2;
    n1 = n2;
    n2 = cur;
  }
  return cur;
}

int main(){
  int step;

  while(scanf("%d", &step) != EOF){
    printf("%d\n", Fib(step));
  }
}
