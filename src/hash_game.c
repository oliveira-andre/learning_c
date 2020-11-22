#include <stdio.h>
#include <stdlib.h>

void resetBoard(char board[3][3]) {
  int i;
  int j;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      board[i][j] = ' ';
    }
  }
}

void showBoard(char board[3][3]) { 
  int i;
  int j;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%c |", board[i][j]);
    }
    printf("\n");
  }
}

int main() {
  char board[3][3];
  char c1 = 'X';
  char c2 = 'O';

  resetBoard(board);
  showBoard(board);

  return 0;
}
