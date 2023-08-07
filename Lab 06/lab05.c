#include <stdio.h>
#define BOARD_SIZE 8

void bishopMoves(int x, int y, int key,char (*board)[BOARD_SIZE]) {
    int x2 = x, y2 = y;
    if (key == 1) {
        while (x2 >= 0 && y2 >= 0) {
            x2 -= 1;
            y2 -= 1;
            if (x2 >= 0 && y2 >= 0) {
                board[x2][y2] = 'X';
            }
        }
    }
    else if (key == 2) {
        while (x2 >= 0 && y2 <= 7) {
            x2 -= 1;
            y2 += 1;
            if (x2 >= 0 && y2 <= 7) {
                board[x2][y2] = 'X';
            }
        }
    }
    else if (key == 3) {
        while (x2 <= 7 && y2 >= 0) {
            x2 += 1;
            y2 -= 1;
            if (x2 <= 7 && y2 >= 0) {
                board[x2][y2] = 'X';
            }
        }
    }
    else if (key == 4) {
        while (x2 <= 7 && y2 <= 7) {
            x2 += 1;
            y2 += 1;
            if (x2 <= 7 && y2 <= 7) {
                board[x2][y2] = 'X';
            }
        }
    }
}

int main() {
    char pirce,board[BOARD_SIZE][BOARD_SIZE] = 
    {   {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}    };
    int x, y, i;
    printf("Enter Bishop's X Y position: ");
    scanf("%d %d", &y, &x);
    board[x][y] = 'B';
    for (i = 1; i <= 4; i++) {
        bishopMoves(x, y, i, board);
    }
    printf("  0 1 2 3 4 5 6 7\n------------------");
    for (int i = 0; i < 8; i++) {
        printf("\n%d", i);
        for (int j = 0; j < 8; j++) {
            printf("|%c", board[i][j]);
        }
        printf("|\n------------------");
    }
}