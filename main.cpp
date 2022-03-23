#include <iostream>
#include <vector>
#include "Board.h"
#include "Piece.h"
#include "Rook.h"

using namespace std;

int main() {

    Board *board = new Board();

    Rook *wr1 = new Rook(0,0,'w',"r");
    Rook *wr2 = new Rook(0,7,'w',"r");
    Rook *br1 = new Rook(5,0,'b',"R");
    Rook *br2 = new Rook(0,6,'b',"R");

    vector <Piece> white;

    wr1->Move(7,0);
    wr1->CheckForMove();




    delete wr1;
    delete wr2;
    delete br1;
    delete br2;
    delete board;

return 0;
}
