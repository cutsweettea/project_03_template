#include <stdio.h>

void PointerCheck(int* p1, int* p2) {
  if(p1 == p2) {
    printf("Same address!\n");
  }
  
  if(*p1 == *p2) {
    printf("Same value!\n");
  }

  *p1 = 0;
  *p2 = 0;
}

int main(){
  int same_pointer;
  int val_a;
  int val_b;

  while(scanf("%d %d %d", &same_pointer, &val_a, &val_b) != EOF){
    if(same_pointer){
      int a = val_a;
      int* p1 = &a;
      int* p2 = p1;
      PointerCheck(p1, p2);
    }
    else{
      int a = val_a;
      int b = val_b;
      int* p1 = &a;
      int* p2 = &b;
      PointerCheck(p1, p2);
      if(p1 == p2){
        printf("Error! You should NOT reassign the pointers themselves. Autograder detected pointers were not originally the same, but now point to the same address\n");
        return 1;
      }
    }
  }
  return 0;
}
