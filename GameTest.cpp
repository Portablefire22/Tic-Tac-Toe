// GameTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <string>
#include <list>    

int gameLoop();
void ClearScreen();
void startup();
void boardOutput(std::list<std::string> board);

void startup() {
    int rows;
    int columns;
    std::list<std::string> board;
    std::cout << "Amount of rows ";
    std::cin >> rows;
    std::cout << "Amount of columns ";
    std::cin >> columns;
    //std::cout << rows << ","  << columns;
    int i = 0;
    for (int i = 0;  i <= columns - 1; i++) {
        for (int f = 0; f <= rows - 1; f++) {
            board.push_back(" ");
            board.push_back("|");
        }
        board.push_back("\n");
        if (i != columns - 1)
        {
            for (int f = 0; f <= ((rows - 1 )* 2) + 2; f++) {
                board.push_back("-");
            }
            board.push_back("\n");
        }
    }
    boardOutput(board);
    
}

void boardOutput(std::list<std::string> board) {
    for (auto v : board) {
        std::cout << v;
    }
}

void ClearScreen()
{
    COORD cursorPosition;	cursorPosition.X = 0;	cursorPosition.Y = 0;	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cursorPosition);

}

int main()
{
    std::cout << "Hello World!\n";
    gameLoop();
    
}

int gameLoop() {
    std::string s1("#");
    startup();
    return 0;
}




