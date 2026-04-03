#include <stdio.h>

int CalculateDamage(int attack_damage, int num_attacks, int shield){
}

int main(){
  int attack;
  int num_attacks;
  int shield;

  while(scanf("%d %d %d", &attack, &num_attacks, &shield) != EOF){
    printf("%d\n", CalculateDamage(attack, num_attacks, shield));
  }
}
