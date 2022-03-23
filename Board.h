//
// Created by Piotr on 22.03.2022.
//
#include <string>

#ifndef FULLCHESSGAME_BOARD_H
#define FULLCHESSGAME_BOARD_H


class Board {
public:
//    static char chess_array[8][8];
    static std::string chess_array[8][8];
    Board();
    void ShowBoard();
};


#endif //FULLCHESSGAME_BOARD_H
