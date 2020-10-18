#include<stdio.h>

char three_board[3][3];
char five_board[5][5];
char mode, board;
char letter;
char computer, playerone, playertwo;
int onescore, twoscore;

void modechoice();
void boardchoice();
void init_boards();
void draw_five_board();
void player1moveb5();
void point_countb5p1(char*[5] five_board);

int main(void) {
        modechoice();
        boardchoice();
        init_boards();
        onescore = 0;
        twoscore = 0;
                if(mode == 'A' && board == 'B') {
                        draw_five_board();
                        printf("Player 1 Score: %d\n", onescore);
                        printf("Player 2 Score: %d\n", twoscore);
                        player1moveb5();
                        draw_five_board();
                        point_countb5p1(five_board);

                        player1moveb5();
                        draw_five_board();
                        point_countb5p1(five_board);

                        player1moveb5();
                        draw_five_board();
                        point_countb5p1(five_board);

                        }

        return 0;
}


void modechoice() {
        printf("Choose your player mode by typing A or B: \nA) Player vs Player\nB)Player vs Computer\n");
        do {
        mode = getchar();
        }
        while((mode != 'A') && (mode != 'B'));

                if(mode == 'A') {
                        printf("You chose Player vs Player\n");
                }
                else if(mode == 'B') {
                        printf("You chose Player vs Computer\n");
                }
                        }

void boardchoice() {
        printf("Now choose the board size by typing A, B:\nA)3x3\nB)5x5\n");
        do {
        board = getchar();
        //printf("Invalid Input\n");
        }
        while((board != 'A') && (board != 'B'));
                printf("board is: %c\n", board);
        /*if ((board != 'A') && (board !='B') && (board!= 'C')) {
                printf("Invalid Input");
                } */
        }

void init_boards() {
        for(int row = 0; row <3; row++) {
                       for(int col=0; col<3; col++) {
                       three_board[row][col] = '-';
                     }
                }
        for (int row= 0; row <5; row++) {
                for(int col=0; col <5; col++) {
                        five_board[row][col] = '-';
                        }
                }
        }

void draw_five_board() {
        int row;
        int col;
        for(row = 0; row<5; row++) {
                printf("%c %c %c %c %c\n", five_board[row][0], five_board[row][1], five_board[row][2], five_board[row][3], five_board[row][4]);
                }
        }

void player1moveb5() {
        int spot;
        int row,col;
        printf("\nPlayer 1's Turn\n");
        do {
                printf("Choose a spot by typing a number between 1 and 25:\n");
                scanf("%d", &spot);
                row = (spot-1)/5;
                col = (spot-1)%5;
                }
        while(five_board[row][col] != '-');

        do {
                printf("S or O?\n");
                scanf("%c", &letter);
                }
        while((letter != 'O') && (letter != 'S'));

        five_board[row][col] = letter;
        }

void point_countb5p1(char*[5] five_board) {
        int row, col;
        if(five_board[row][col] == 'O') {
                if(five_board[row-1][col] == 'S' && five_board[row+1][col] == 'S') {
                onescore++;
                }
                else if(five_board[row-1][col+1] == 'S' && five_board[row+1][col-1] == 'S') {
                onescore++;
                }
                else if(five_board[row-1][col-1] == 'S' && five_board[row +1][col+1] == 'S') {
                onescore++;
                }
                else if(five_board[row][col-1] == 'S' && five_board[row][col+1] == 'S') {
                onescore++;
                }
        }
        if(five_board[row][col] == 'S') {
                if(five_board[row-1][col] == 'O' && five_board[row-2][col] == 'S') {
                onescore++;
                }
                else if(five_board[row][col-1] == 'O' && five_board[row][col-2] == 'S') {
                onescore++;
                }
                else if(five_board[row+1][col] == 'O' && five_board[row+2][col] == 'S') {
                onescore++;
                }
                else if(five_board[row][col+1] == 'O' && five_board[row][col+2] == 'S') {
                onescore++;
                }
                else if(five_board[row+1][col+1] == 'O' && five_board[row+2][col+2] == 'S') {
                onescore++;
                }
                else if(five_board[row-1][col-1] == 'O' && five_board[row-2][col-2] == 'S') {
                onescore++;
                }
                else if(five_board[row-1][col+1] == 'O' && five_board[row-2][col+2] == 'S') {
                onescore++;
                }
                else if(five_board[row+1][col-1] == 'O' && five_board[row+2][col-2] == 'S') {
                onescore++;
                }
        }
        printf("Player one Score: %d\n", onescore);
        printf("Player two Score: %d\n", onescore);
        }


~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
"sos.c" [New File]                                                                                            0,0-1         All

