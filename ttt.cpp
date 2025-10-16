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
            for (auto& row : board) {       //basically saying go through all the row in 3x3 vector, and uses auto as identifier since the variable type is a vector
                std::cout << "{    ,     ,     }";
                for (char cell : row){      //saying to go through each element and print it out 
                    std::cout << cell << ' ';
                }
                std::cout << "\n"; 
            }
        }

        // *TODO have the placeMark update the 3x3 vector and then print out?
        int placeMark(int row, int column, char mark){

            if (mark == 1) {
                board[row][column] = mark;
                printBoard();
            }
        }

        // *TODO if cell is NOT empty, don't allow to place, if cell is empty, place
        void isCellEmpty(int row, int col){
            if (board[row][col] != ' '){
                std::cout << "Please pick another spot, spot is currently taken." << std::endl;
            }
        }


        void checkWin(void) {


            //Check for win condition

        }

        //*TODO if the checkWin is FALSE and all cells are fill, print out draw
        void checkDraw(void) {
            //Check if all the square are filled

        }


};


//Player class
//char mark
//string name 
//getMove() ? 

class Player {
    private:
        char mark;
        std::string playerName;

    public:
    
        Player(char m, std::string n){      //initilize the player and get what type they are 
            mark = m;
            playerName = n;
        }

        void setPlayerAttributes() {

            std::cout << "Player Name: ";
            std::cin >> playerName; 

            std::cout << "Player Mark: ";
            std::cin >> mark; 
        }

        char getMark () {
            return mark;
        }

        std::string getName() {
            return playerName; 
        }

};


//Game class
//board board
//player player1
//player player2
//start()
//switchturn()
//playTurn()

class Game {
    private:

    public:
        void printBoard(){

        };

};
 
// *TODO 

int main(void) 
{

    Board Board;

    Board.printBoard(); 

    char mark;
    std::string playerName;

    Player Player1(' ', "");
    Player Player2(' ', "");

    return 0;
}
