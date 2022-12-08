#include <stdio.h>
#include "game.h"

int test_win(char(*grid)[3], char c){
  int a = 0;
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      if(grid[i][0] == c && grid[i][1] == c &&               grid[i][2] == c){
        a = 1;
      }
      else if(grid[0][j] == c && grid[1][j] == c &&      grid[2][j] == c){
        a = 1;
      }
      else if(grid[0][0] == c && grid[1][1] == c &&      grid[2][2] == c){
        a = 1;
      }
      else if(grid[0][2] == c && grid[1][1] == c &&      grid[2][0] == c){
        a = 1;
      }
      
    }
  }
  
  return a;
}