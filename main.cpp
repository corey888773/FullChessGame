#include <iostream>

using namespace std;

class Piece{
public:
    Piece(){
    }

    int row, column;
    string color;
    char name;
    int state_array[8][8] = {{0,0,0,0,0,0,0,0},
                             {0,0,0,0,0,0,0,0},
                             {0,0,0,0,0,0,0,0},
                             {0,0,0,0,0,0,0,0},
                             {0,0,0,0,0,0,0,0},
                             {0,0,0,0,0,0,0,0},
                             {0,0,0,0,0,0,0,0},
                             {0,0,0,0,0,0,0,0}};

    void show_state_array(){
        for (int i = 7 ; i >= 0 ; i--){
            cout << "|";
            for (int j = 0 ; j < 8 ; j++){
                cout << state_array[i][j] << "|";
            }
            cout << endl << endl;
        }
    }

};

class Rook : public Piece{
public:
    Rook(int r, int c, string col, char n){
        row = r;
        column = c;
        color = col;
        name = n;
        state_array[row][column] = 1;
    }

    void ShowPossibleMoves()
    {
        int i = 1;
        while((state_array[row + i][column] == 0) && (row + i < 8)){
            state_array[row + i][column] = 2;
            i++;
        }

    }
};

class Knight : public Piece{
public:
    Knight(int r, int c, string col){
        row = r;
        column = c;
        color = col;
    }

};

class Pawn : public Piece{
public:
    Pawn(int r, int c, string col){
        row = r;
        column = c;
        color = col;
    }

};

class Bishop : public Piece{
public:
    Bishop(int r, int c, string col){
        row = r;
        column = c;
        color = col;
    }
};

class Queen : public Piece{
public:
    Queen(int r, int c, string col){
        row = r;
        column = c;
        color = col;
    }
};

class Board{
public:

    char chess_array[8][8] = {{0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0}};

//    int state_board[8][8] = {{0,0,0,0,0,0,0,0},
//                              {0,0,0,0,0,0,0,0},
//                              {0,0,0,0,0,0,0,0},
//                              {0,0,0,0,0,0,0,0},
//                              {0,0,0,0,0,0,0,0},
//                              {0,0,0,0,0,0,0,0},
//                              {0,0,0,0,0,0,0,0},
//                              {0,0,0,0,0,0,0,0}};

    Board(){
        }

    void place_on_board(Piece *p){
        chess_array[p->row][p->column] = p->name;
    }

    void show_board() {
        for (int i = 7; i >= 0; i--) {
            cout << i + 1 << "| ";
            for (int j = 0; j < 8; j++) {
                cout << chess_array[i][j] << " | ";

            }cout << endl << endl;
        }
        cout << "   ";
        for (int j = 0; j < 8; j++)
            cout << char(j + 'A') << "   ";

    }
//    void show_state() {
//        for (int i = 7; i >= 0; i--) {
//            cout << i + 1 << "| ";
//            for (int j = 0; j < 8; j++) {
//                cout << state_board[i][j] << " | ";
//
//            }cout << endl << endl;
//        }
//        cout << "   ";
//        for (int j = 0; j < 8; j++)
//            cout << char(j + 'A') << "   ";

};

int main() {

    Rook R1(0, 0, "w", 'R');
    Rook R2(7, 0, "b", 'r');

    Board board;
    board.place_on_board(&R1);
    board.place_on_board(&R2);
    R1.ShowPossibleMoves();
    R1.show_state_array();

return 0;
}
