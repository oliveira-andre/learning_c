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

void currentTurn(char board[3][3], char player) {
  int x, y;

  while (1) {
    printf("Type the coordinates: ");
    scanf("%d %d", &x, &y);

    if (board[x][y] == ' ') {
      board[x][y] = player;
      break;
    } else if ((x > 2 || y > 2) || (x < 0 || y < 0)) {
      printf("invalid coordinates\n");
    } else {
      printf("this position cannot be used\n");
    }
  }
}

int validateBoard(char board[3][3], char player) {
  int i, j;

  for (i = 0; i < 3; i++) {
    if (board[i][0] != ' ' &&
        board[i][0] == board[i][1] &&
        board[i][1] == board[i][2]) {

      return 1;
    }
  }

  for (j = 0; j < 3; j++) {
    if (board[0][j] != ' ' &&
        board[0][j] == board[1][j] &&
        board[1][j] == board[2][j]) {

      return 1;
    }
  }

  if (board[0][0] != ' ' &&
      board[0][0] == board[1][1] &&
      board[1][1] == board[2][2]) {

    return 1;
  }

  if (board[0][2] != ' ' &&
      board[0][2] == board[1][1] &&
      board[1][1] == board[2][0]) {

    return 1;
  }

  return 0;
}

int main() {
  char board[3][3];
  char c1 = 'X';
  char c2 = 'O';
  char player = c1;

  resetBoard(board);
  showBoard(board);

  while (1) {
    currentTurn(board, player);
    showBoard(board);

    if (validateBoard(board, player) == 1) {
      printf("the player %c win the game!\n", player);
      break;
    } else {
      if (player == c1) player = c2;
      else player = c1;
    }
  }

  printf("Game Over\n");
  return 0;
}
