#include <stdio.h>
#include "restart.h"
#include "char_array.h"

void restart_game(char (*grid)[3]){
  init_grid(grid,'-');
}
