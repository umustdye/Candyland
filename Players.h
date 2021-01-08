/*
 * Red is Player 1
 * Blue is Player 2
 * Green is Player 3
 * Yellow is Player 4
 */

/* 
 * File:   Players.h
 * Author: Heidi Dye
 * Created on October 17, 2019, 8:56 PM
 * Purpose: Generate the players
 */

#ifndef PLAYERS_H
#define PLAYERS_H
#include <stack>
#include <map>
#include <iterator>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

class Players {
public:
    Players();
    ~Players();
    //void calcColor();
    void setLocationNumber(int location);
    void setLocationColor(string color);
    void setLocation();
    int getLocationNum();
    string getLocationCol(); //returns the color of the position
    void setPlayer(string);
    string getPlayer();
    //int getPlayer();
    void setActivePlayer(int, string*);
    string getColorTaken();
    int getPlayerVal();
    
private:
    string player;    //holds the player color and its respective number
    map<string, int> location;  //holds the player and their location on the board
    stack<string> colorPosition;
    string* availableColors;
    int colorsAvailable;
    string colorTaken;
    int locationNum;
    string locationCol;
    int playerCol;
    
    
};

#endif /* PLAYERS_H */

