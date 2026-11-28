#include<iostream>
#include "Board.h"
using namespace std;
Board :: Board()
{
    initialize();
}
void Board :: initialize()
{
    char initial[8][8] =
    {
        {'r','n','b','q','k','b','n','r'},
        {'p','p','p','p','p','p','p','p'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'P','P','P','P','P','P','P','P'},
        {'R','N','B','Q','K','B','N','R'}
    };
    for ( int i = 0 ; i < 8 ; i++)
    {
        for ( int j = 0 ; j < 8 ; j++)
        {
            board[i][j] = initial[i][j];
        }
    }
}
void Board:: display()
{
    cout << "\n";
    for ( int i = 0 ; i < 8 ; i++)
    {
        cout << 8 - i << " ";
        for ( int j = 0 ; j < 8 ; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "a b c d e f g h \n";
}
bool Board::movePiece(int startRow, int startCol, int endRow, int endCol)
{
    if(startRow < 0 || startRow >= 8 ||
       startCol < 0 || startCol >= 8 ||
       endRow < 0 || endRow >= 8 ||
       endCol < 0 || endCol >= 8)
    {
        return false;
    }

    if(board[startRow][startCol] == '.')
    {
        return false;
    }

    if(board[endRow][endCol] != '.')
    {
        return false;
    }

    board[endRow][endCol] = board[startRow][startCol];
    board[startRow][startCol] = '.';

    return true;
}