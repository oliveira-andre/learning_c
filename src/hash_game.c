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

  printf("\n\n");
}

int main() {
  char board[3][3];
  char c1 = 'X';
  char c2 = 'O';
  char player = c1;
  int x, y;

  resetBoard(board);
  showBoard(board);

  while (1) {
    printf("Type the coordinates: ");
    scanf("%d %d", &x, &y);


    if (board[x][y] == ' ') {
      board[x][y] = player;
    } else if ((x > 2 || y > 2) || (x < 0 || y < 0)) {
      printf("invalid coordinates\n");

      if (player == c1) player = c2;
      else player = c1;
    } else {
      printf("this position cannot be used\n");
    }

    showBoard(board);
  }

  return 0;
}
