#pragma once
#include <string>
using std::string;

const int BLACK = 0, RED = 1, NONE = 2;

enum Peices{
    Blank=0,
    Soldier=1,
    Cannon=2,
    Chariot=3,
    Horse=4,
    Elephant=5,
    Advisor=6,
    General=7
};

const string bSymbols[] = {" ","卒","包","車","馬","象","士","將"},
             rSymbols[] = {" ","兵","炮","俥","傌","相","仕","帥"};

class Peice{
public:
    Peice();
    Peice(int type,int ownership);
    int getOwnership();
    int getType();
    void setOwnership(int ownership);
    void setType(int type);
    Peice& operator=(Peice rhs);
private:
    int type;
    int ownership;
};

class Board{
public:
    Board();
    void showBoard();
private:
    Peice boardData[10][9];
};
