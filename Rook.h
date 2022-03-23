//
// Created by Piotr on 22.03.2022.
//

#ifndef FULLCHESSGAME_ROOK_H
#define FULLCHESSGAME_ROOK_H

#include <string>
#include "Piece.h"

class Rook : public Piece{
public:
    Rook(int y, int x, char c, std::string n);
    void CheckForMove();
    void Move(int x, int y);
};



#endif //FULLCHESSGAME_ROOK_H
