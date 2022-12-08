#include "stats.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


Person *stat(int hp_max,int hp,int atk,int def){
  Person *s = malloc(sizeof(Person));
  s->hp_max = hp_max;
  s->hp = hp;
  s->atk = atk;
  s->def = def;
  return s;
}



void info(Person *s){
  printf("%dpv %dpv max %datk %ddef\n",s->hp,s->hp_max,s->atk,s->def);
}

void upgrade(Person *s){
  srand(time(NULL));
  int a = rand()%3+1;
  if(a==1){
    s->hp_max = s->hp_max + 1;
  }
  else if(a==2){
    s->atk = s->atk + 1;
  }
  else{
    s->def = s->def + 1;
  }
}

void upgrade_monster(Person *p){
  p->hp_max = p->hp_max + 2;
  p->hp = p->hp + 2;
  p->atk = p->atk + 2;
}
