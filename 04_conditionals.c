#include <stdio.h>

int main(){
  int damage;
  int health;

  while(scanf("%d %d", &damage, &health) != EOF){
    printf("Enemy left with %d health\n", DealDamage(damage, health));
  }
}
