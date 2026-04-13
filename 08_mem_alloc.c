#include <stdio.h>
#include <stdlib.h>

int* CreateArray(int length) {
  int* arr = (int*)malloc(sizeof(int)*length);
  for(int i = 0; i < length; i++) {
    arr[i] = i+1;
  }
  return arr;
}

int main(){
  int length;

  while(scanf("%d", &length) != EOF){
    int* arr = CreateArray(length);
    for(int i = 0; i < length; i++){
      printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
  }
  return 0;
}
