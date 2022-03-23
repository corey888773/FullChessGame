//
// Created by Piotr on 22.03.2022.
//

#ifndef FULLCHESSGAME_PIECE_H
#define FULLCHESSGAME_PIECE_H


#include "Board.h"
#include <string>

class Piece : public Board{
public:
    int ox, oy;
    char color;
    std::string name;
    Piece(int y, int x, char c, std::string n);
    void PlaceOnBoard();
    void Replace(int x, int y);
    void ClearBoard();
    char TopBound() const;
    char BottomBound() const;
};


#endif //FULLCHESSGAME_PIECE_H
