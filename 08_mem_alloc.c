#include <stdio.h>

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
