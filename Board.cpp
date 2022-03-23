//
// Created by Piotr on 22.03.2022.
//
#include <iostream>
#include <string>
#include "Board.h"
using namespace std;

//char Board::chess_array[8][8] = {{0,0,0,0,0,0,0,0},
//                           {0,0,0,0,0,0,0,0},
//                           {0,0,0,0,0,0,0,0},
//                           {0,0,0,0,0,0,0,0},
//                           {0,0,0,0,0,0,0,0},
//                           {0,0,0,0,0,0,0,0},
//                           {0,0,0,0,0,0,0,0},
//                           {0,0,0,0,0,0,0,0}};

string Board::chess_array[8][8] = {{"","","","","","","",""},{"","","","","","","",""},{"","","","","","","",""},{"","","","","","","",""},{"","","","","","","",""},{"","","","","","","",""},{"","","","","","","",""},{"","","","","","","",""}};


Board::Board() {

}
void Board::ShowBoard() {
    for (int i = 7; i >= 0; i--) {
        cout << i + 1 << "| ";
        for (int j = 0; j < 8; j++) {
            cout << chess_array[i][j] << " | ";

        }cout << endl << endl;
    }
    cout << "   ";
    for (int j = 0; j < 8; j++)
        cout << char(j + 'A') << "   ";
    cout<<endl;
}


