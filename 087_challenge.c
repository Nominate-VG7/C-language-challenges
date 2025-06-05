#include <stdio.h>
// this program prints tic tac toe game board
int main()
{
    char board[3][3] = {{'X', 'O', 'O'}, {'O', 'X', 'X'}, {'X', 'O', 'X'}};
    printf("Welcome to showing tic tac toe board.\n\n");
    printf("%c|%c|%c\n", board[0][0], board[0][1], board[0][2]);
    printf("-----\n");
    printf("%c|%c|%c\n", board[1][0], board[1][1], board[1][2]);
    printf("-----\n");
    printf("%c|%c|%c\n\n", board[2][0], board[2][1], board[2][2]);

    return 0;
}