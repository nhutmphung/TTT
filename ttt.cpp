#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <vector> 
#include <string>

void printBoard(void);

//Board class 
//3x3 grid 
//displays
//if cell is empty (row,col)
//placeMark (row, col, mark)
//checkWin
//checkDraw()

class Board {
    private:
        int row;
        char cell;
        int column;
        char mark; 
        std::vector<std::vector<char>> board; 
        

    public: 

        Board () {
            board = std::vector<std:: vector<char>> (3, std::vector<char>(3, ' '));
        }
        void printBoard(void) {
            std::cout << "\n";
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    std::cout << " " << board[i][j];
                    if (j < 2) std::cout << " |";
                }
                std::cout << "\n";
                if (i < 2) std::cout << "---+---+---\n";
            }
            std::cout << "\n";
        }




        int placeMark(int row, int column, char mark){

            if (board[row][column] == ' ') {
                board[row][column] = mark;
                printBoard();
            }
            else {
                std::cout << "Please put a mark somewhere else";
            }
            return board[row][column];
        }

        bool checkWin() {
            
            for(int i = 0; i < 3; i++){     //check if won via x rows
                if(board[i][0] == 'x' &&  board[i][1] == 'x' && board[i][2] == 'x'){
                    std::cout << "Congrats, you won!";
                    return true;
                }
            }
            
            for(int i = 0; i < 3; i++){     //check if won via o rows
                if(board[i][0] == 'o' && board[i][1] == 'o' && board[i][2] == 'o'){
                    std::cout << "Congrats, you won!";
                    return true;
                }
            }
            
            for(int i = 0; i < 3; i++){     //check if won via x columns
                if(board[0][i] == 'x' &&  board[1][i] == 'x' && board[2][i] == 'x'){
                    std::cout << "Congrats, you won!";
                    return true;
                }
            }

            
            for(int i = 0; i < 3; i++){     //check if won via o columns
                if(board[0][i] == 'o' && board[1][i] == 'o' && board[2][i] == 'o'){
                    std::cout << "Congrats, you won!";
                    return true;
                }
            }

            if (board[0][0] == 'x' && board[1][1] == 'x' && board[2][2] == 'x'){ //checking for win left to right diag for x
                std::cout << "Congrats, you won!";
                return true;
            }
            if (board[0][0] == 'o' && board[1][1] == 'o' && board[2][2] == 'o'){ //checking for win left to right diag for o
                std::cout << "Congrats, you won!";
                return true;
            }
            if (board[0][2] == 'x' && board[1][1] == 'x' && board[2][0] == 'x'){ //checking for win right to left diag for x
                std::cout << "Congrats, you won!";
                return true;
            }
            if (board[0][2] == 'o' && board[1][1] == 'o' && board[2][0] == 'o'){//cheecking for win right to left diag for o
                std::cout << "Congrats, you won!";
                return true;
            }

            return false;
            
        }

        //*TODO if the checkWin is FALSE and all cells are fill, print out draw
        bool checkDraw() {
            if (checkWin() == true){
                return false; 
            }

            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    if (board[i][j] != ' '){
                        std::cout << "It was a draw.";
                        return true;
                    }
                }
            }
            
            
        }


};

//Game class
//board board
//player player1
//player player2
//start()
//switchturn()
//playTurn()

// *TODO 

int main(void) 
{

    Board Board;


    Board.placeMark(0, 0, 'x');
    Board.placeMark(1, 0, 'o');
    Board.placeMark(2, 0, 'x');

    Board.placeMark(0, 1, 'o');
    Board.placeMark(1, 1, 'x');
    Board.placeMark(2, 1, 'x');

    Board.placeMark(0, 2, 'o');
    Board.placeMark(1, 2, 'x');
    Board.placeMark(2, 2, 'o');



    Board.checkWin();
    Board.checkDraw();


    return 0;
}
