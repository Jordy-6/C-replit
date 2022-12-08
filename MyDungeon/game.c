#include <stdio.h>
#include <stdlib.h>
#include "stats.h"
#include "game.h"

int fight(Person *s,Person *p){
  p->hp = p->hp - (s->atk - p->def);
  return p->hp;
}


void rest(Person *s){
  s->hp = s->hp + (30 * s->hp_max / 100);
  if(s->hp > s->hp_max){
    s->hp = s->hp_max;
  }
}


void boucle(Person *s){
  char(i);
  Person *monster = stat(50,50,8,3);
  int b = 1;
  while(s->hp != 0){
    printf("Appuyez sur 'R' pour vous reposer, 'A' pour attaquer ou 'I' pour afficher vos stats\n");
      scanf("%s",&i);
      if((int)i == 82 || (int)i == 114){
        rest(s);
      }
      else if((int)i == 73 || (int)i == 105){
        info(s);
      }
      else if((int)i == 65 || (int)i == 97){
        printf("Le héros a attaqué le monstre, il lui reste %dpv\n",fight(s,monster));
      }
    if(monster->hp > 0){
      printf("Le monstre a attaqué le héros, il lui reste %dpv\n",fight(monster,s));
    }
    else{
      printf("Vous avez gagné, Voulez-vous continuer ? 'O' pour oui, 'N' pour non\n");
      scanf("%s",&i);
        if((int)i == 79 || (int)i == 111){
          b++;
          upgrade(s);
          monster = stat(50,50,8,3);
          upgrade_monster(monster);
          printf("Niveau %d\n",b);
        }
      else{
        printf("Fin du jeu\n");
        break;
      }
    }
     
    }
  free(monster);
}

