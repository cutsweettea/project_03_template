#include <stdio.h>

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
