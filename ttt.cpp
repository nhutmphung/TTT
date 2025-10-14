#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <vector> 

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
        std::vector<int> myVector{3,3};
        

    public: 
        int placeMark(int row, int column, char mark){

        }

        void isCellEmpty(int row, int col){

        }


        void checkWin(void) {


            //Check for win condition

        }

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


        void getPlayerAttritbute() {
            scanf("%s", mark);
            scanf("%s", playerName);

        };

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


// *TODO Start first by asking player name and mark 
// *TODO then create the board using a 3x3 array 

int main(void) 
{
    printf("Welcome to Tic-Tac-Toe!\n");

    char target[50];
    printf("Enter target: ");
    scanf("%49s", target);

    printf("You entered: %s\n", target);
    

    printBoard();
    return 0;
}

void printBoard(void) 
{  
    printf("\n\n");
    for (int i = 0; i < 3; i++)
    {   
        std::cout << "    | \t | \n";
        if (i != 2)
        {
            std::cout << "--------------";
            printf("\n");
        }
    }
}