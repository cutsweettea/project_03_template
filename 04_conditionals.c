#include <stdio.h>

int DealDamage(int damage, int health) {
  if(damage >= 0) {
    printf("You dealt %u damage!\n", damage);
    int diff = health - damage;
    if(diff > 0) return diff;
    else {
      printf("Enemy defeated!\n");
      return 0;
    }
  } else {
    printf("Enemy healed %u health!\n", (damage*-1));
    return health - damage;
  }
}

int main(){
  int damage;
  int health;

  while(scanf("%d %d", &damage, &health) != EOF){
    printf("Enemy left with %d health\n", DealDamage(damage, health));
  }
}
