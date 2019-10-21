/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Game.h
 * Author: Heidi2
 *
 * Created on October 17, 2019, 8:56 PM
 */

#ifndef GAME_H
#define GAME_H
#include "Board.h"
#include "Deck.h"
#include "Players.h"
#include <string>
#include <stdio.h>
using namespace std;
class Game {
public:
    Game(int);
    virtual ~Game();
    void initGame(int);
    void playerTurn();    //play true each turn
    void outOfCards(); //reshuffle the cards
    void outputTurn();
    bool winner();
    void removeColor(string, int);
    bool getWinnerPlayer();
    void convertCardColor();
    void pressAnyKey();
    void dos();
    
private:
    int turn; 
    int numberOfPlayers;
    Players* players; //holds the players who are active
    Deck deck;
    string card;
    string cardColor;
    Board board;
    bool winnerPlayer;
    int colorsAvailable;
    string* availableColors;
    string doubleOrSingle;
    
};

#endif /* GAME_H */

