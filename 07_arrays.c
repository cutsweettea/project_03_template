#include <stdio.h>
#include <stdlib.h>

void FillArray(int* arr, int length) {
  for(int i = 0; i < length; i++) {
    arr[i] = i+1;
  }
}

int main(){
  int length;

  while(scanf("%d", &length) != EOF){
    int* arr = (int*)malloc(sizeof(int) * length);
    FillArray(arr, length);
    for(int i = 0; i < length; i++){
      printf("%d ", arr[i]);
    }
    printf("\n");
  }
  return 0;
}
