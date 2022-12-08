#include <stdio.h>
#include <stdlib.h>
#include "stats.h"
#include "game.h"

int main(void) {
Person *hero = stat(100,100,10,4);
  boucle(hero);
  free(hero);
  return 0;
}
