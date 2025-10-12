#include <stdio.h>
#include <iostream>
#include <stdlib.h>

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
        int column;
        std::string mark; 



    public: 
        int placeMark(int row, int column, char mark){

        }


        void checkWin(void) {

        }

        void checkDraw(void) {

        }


};


class Player {

};

class Game {

};

//Player class
//char mark
//string name 
//getMove() ? 


//Game class
//board board
//player player1
//player player2
//start()
//switchturn()
//playTurn()

int main (void) 
{
    printf("Welcome to Tic-Tac-Toe!");
    printBoard();

}

void printBoard(void) 

{  
    printf("\n\n");
    for (int i = 0; i < 3; i++)
    {   
        std::cout << "    | \t | \n";
        if (i != 2)
        {
        std::cout <<"--------------";
        printf("\n");
        }
    }
}