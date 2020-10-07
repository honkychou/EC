#include "Board.hpp"
#include <iostream>

using namespace std;

Peice::Peice(){
    this->type = Blank;
    this->ownership = NONE;
}

Peice::Peice(int type, int ownership){
    this->type = type;
    this->ownership = ownership;
}

void Peice::setType(int type){
    this->type = type;
}

void Peice::setOwnership(int ownership){
    this->ownership = ownership;
}

int Peice::getType(){
    return this->type;
}

int Peice::getOwnership(){
    return this->ownership;
}

Peice& Peice::operator=(Peice rhs){
    this->type = rhs.type;
    this->ownership = rhs.ownership;
    return *this;
}

Board::Board(){
    // setting default
    this->boardData[0][0] = Peice(Chariot,BLACK);
    this->boardData[0][1] = Peice(Horse,BLACK);
    this->boardData[0][2] = Peice(Elephant,BLACK);
    this->boardData[0][3] = Peice(Advisor,BLACK);
    this->boardData[0][4] = Peice(General,BLACK);
    this->boardData[0][5] = Peice(Advisor,BLACK);
    this->boardData[0][6] = Peice(Elephant,BLACK);
    this->boardData[0][7] = Peice(Horse,BLACK);
    this->boardData[0][8] = Peice(Chariot,BLACK);
    
    this->boardData[2][1] = Peice(Cannon,BLACK);
    this->boardData[2][7] = Peice(Cannon,BLACK);
    
    this->boardData[3][0] = Peice(Soldier,BLACK);
    this->boardData[3][2] = Peice(Soldier,BLACK);
    this->boardData[3][4] = Peice(Soldier,BLACK);
    this->boardData[3][6] = Peice(Soldier,BLACK);
    this->boardData[3][8] = Peice(Soldier,BLACK);
    
    
    this->boardData[9][0] = Peice(Chariot,RED);
    this->boardData[9][1] = Peice(Horse,RED);
    this->boardData[9][2] = Peice(Elephant,RED);
    this->boardData[9][3] = Peice(Advisor,RED);
    this->boardData[9][4] = Peice(General,RED);
    this->boardData[9][5] = Peice(Advisor,RED);
    this->boardData[9][6] = Peice(Elephant,RED);
    this->boardData[9][7] = Peice(Horse,RED);
    this->boardData[9][8] = Peice(Chariot,RED);
    
    this->boardData[7][1] = Peice(Cannon,RED);
    this->boardData[7][7] = Peice(Cannon,RED);
    
    this->boardData[6][0] = Peice(Soldier,RED);
    this->boardData[6][2] = Peice(Soldier,RED);
    this->boardData[6][4] = Peice(Soldier,RED);
    this->boardData[6][6] = Peice(Soldier,RED);
    this->boardData[6][8] = Peice(Soldier,RED);
}

void Board::showBoard(){
    for(int row=0;row<10;++row){
        string rStr = "";
        for(int col=0;col<9;++col){
            if(this->boardData[row][col].getOwnership() == BLACK)
                rStr += bSymbols[this->boardData[row][col].getType()];
            else
                rStr += rSymbols[this->boardData[row][col].getType()];
        }
        cout << rStr << endl;
    }
}
