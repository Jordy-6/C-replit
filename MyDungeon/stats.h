#ifndef STATS_H
#define STATS_H


typedef struct {
    int hp;     //les points de vie
    int hp_max; //les points de vie maximum
    int atk;    // les points d'attaque
    int def;    // les points de defense 
}Person;

Person *stat(int hp_max,int hp,int atk,int def);
void info(Person *s);
void upgrade(Person *s);
void upgrade_monster(Person *p);
#endif

