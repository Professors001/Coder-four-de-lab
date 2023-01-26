#include <stdio.h>

#define BOARD_SIZE    8

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos);

int main() {
    char board[BOARD_SIZE][BOARD_SIZE] = {
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}},piece;
    int numPieces = 0, i, j, xPos, yPos;
    scanf("%d", &numPieces);
    for (i = 1;i <= numPieces; i++) {
        scanf("\n%c(%d, %d)", &piece, &yPos, &xPos);
        board[xPos][yPos] = ('%c', piece);
    }
    printf("------------------\n  0 1 2 3 4 5 6 7");
    for (i = 0; i < 8; i++) {
        printf("\n%d", i);
        for (j = 0; j < 8; j++) {
            printf("|%c", board[i][j]);
        }
        printf("|");
    }
}
void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos )
{
    return 0;
}