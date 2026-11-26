#ifndef BOARD_H
#define BOARD_H

class Board
{
private:
    char board[8][8];

public:
    Board();

    void initialize();
    void display();

    bool movePiece(int startRow, int startCol, int endRow, int endCol);
};

#endif