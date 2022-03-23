//
// Created by Piotr on 22.03.2022.
//


#include <iostream>
#include <string>
#include "Rook.h"

using namespace std;

Rook::Rook(int x, int y, char c, std::string n): Piece(x,y,c,n) {

};

void Rook::CheckForMove() {
    char c_min = this->BottomBound(), c_max = this->TopBound();
    int x = this->ox;
    int y = this->oy;


    while (x < 7)
    {
        if(chess_array[x+1][this->oy][0] > c_min && chess_array[x+1][this->oy][0] < c_max){
            chess_array[x + 1][this->oy] += "x";
            break;
        }
        if(chess_array[x+1][this->oy].empty()) {
            chess_array[x + 1][this->oy] += "x";

        }
        x++;

    }
    x = this->ox;
    while (x > 0)
    {
        if(chess_array[x-1][this->oy].empty()) {
            chess_array[x - 1][this->oy] += "x";

        }
        if(chess_array[x-1][this->oy][0] > c_min && chess_array[x+1][this->oy][0] < c_max){
            chess_array[x - 1][this->oy] += "x";
            break;
        }
        x--;
    }
    while (y < 7)
    {
        if(chess_array[this->ox][y+1].empty()) {
            chess_array[this->ox][y + 1] += "x";

        }
        if(chess_array[this->ox][y + 1][0] > c_min && chess_array[this->ox][y + 1][0] < c_max){
            chess_array[this->ox][y + 1] += "x";
            break;
        }
        y++;
    }
    y = this->oy;
    while (y > 0)
    {
        if(chess_array[this->ox][y-1].empty()) {
            chess_array[this->ox][y - 1] += "x";
        }
        if(chess_array[this->ox][y-1][0] > c_min && chess_array[this->ox][y+1][0] < c_max){
            chess_array[this->ox][y - 1] += "x";
            break;
        }
        y--;
    }

    Board::ShowBoard();
};

void Rook::Move(int x, int y){
    this->CheckForMove();
    if(chess_array[x][y] == "x"){
        this->Replace(x, y);
        this->ClearBoard();
    }
    else{
        cout<<"nie mozna sie tam poruszyc" << endl;
    }


}