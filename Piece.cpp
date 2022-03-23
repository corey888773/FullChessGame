//
// Created by Piotr on 22.03.2022.
//

#include "Piece.h"
#include <string>

Piece::Piece(int x, int y, char c, std::string n) : ox(x), oy(y), color(c), name(n){
    this->PlaceOnBoard();
};

void Piece::PlaceOnBoard() {
    chess_array[this->ox][this->oy] = this->name;
}

void Piece::ClearBoard() {
    for (int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(chess_array[i][j] == "x")
                chess_array[i][j] = "";
        }
    }
}

void Piece::Replace(int x, int y) {
    chess_array[this->ox][this->oy] = "";
    chess_array[x][y] = this->name;
    this->ox=x;
    this->oy=y;
}

char Piece::TopBound() const{

    if(this->color == 'w')
        return 'Y';
    else
        return 'y';
}
char Piece::BottomBound() const{

    if(this->color == 'w')
        return 'A';
    else
        return 'a';
}