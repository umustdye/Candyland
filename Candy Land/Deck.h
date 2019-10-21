/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Deck.h
 * Author: Heidi2
 *
 * Created on October 17, 2019, 10:15 PM
 */

#ifndef DECK_H
#define DECK_H
#include <map>
#include <ctime>
#include <queue>
#include <iostream>
#include <deque>
#include <iterator>
#include <string>
#include <algorithm>
#include "Players.h"
using namespace std;

class Deck {
public:
    Deck();
    void reshuffle();
    void fillDeck();
    void ifEmpty();
    int getDeckSize();
    string getCard(); 
    void outputMove(string card);
private:
    int deckSize;   //how many cards in a deck
    //map<string, int>cards;//takes the color of the card are switches it to the numerical value
    deque<string> ogDeck;
    queue<string> shuffledDeck;
};

#endif /* DECK_H */

