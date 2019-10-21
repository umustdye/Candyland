/****************************************************************************
 *                                                                          *
 *                              Candy Land                                  *
 *                                                                          *        
 ****************************************************************************/
/* 
 * File:   main.cpp
 * Author: Heidi Dye
 *
 * Created on October 17, 2019, 6:50 PM
 */

#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include "Game.h"
#include "Players.h"
using namespace std;

/* Notes to self:
 *  To shuffle the cards in the deck: Ouicksort randomized version Algo pg.179
 *      or STL Shuffling Elements pg.589
 *  For the player and their position: sets STL pg.314
 *  For the colors on the board and their numerical representations: maps STL pg. 331
 *  For the Cards: Queues 638
 *  For the Color Position: Stack to subtract the last position with the card position and add that value to the stack STL pg.632 
 *  Game Board layout http://datagenetics.com/blog/december12011/index.html
 */
int main(int argc, char** argv) 

{
    //cout<<"-----  ---  \     | |\  \     /  |      ---  \     | |\""<<endl;
    //cout<<"|     |   | |\    | | \  \   /   |     |   | |\    | | \"<<endl;
    //cout<<"|     |   | | \   | |  \  \ /    |     |   | | \   | |  \"<<endl;
    //cout<<"|     |---| |  \  | |  /   |     |     |---| |  \  | |  /"<<endl;
    //cout<<"|     |   | |   \ | | /    |     |     |   | |   \ | | /"<<endl;
   // cout<<"|____ |   | |    \| |/     |     |____ |   | |    \| |/"<<endl;
    cout<<"Welcome to the game of Candyland"<<endl;
    cout<<"How many players? Please enter a value between 2-4"<<endl;
    int players;
    cin>>players;
    //kitty cat proof
    bool valid_play;
    valid_play = players;
    if (!valid_play)
    {
        cin.clear ();
        cin.ignore (10000, '\n');
        cout<< "Sorry, invalid input. Please enter a numerical value\n";
        return 1; 
    }
    if(players<2||players>4)
    {
        cout<<"Sorry,value is out of range"<<endl;
        return 1;
    }
    
    Game game(players);
    //game.pressAnyKey();
    int c;
    
    fflush( stdout );
    do c = getchar(); while ((c != '\n') && (c != EOF));
    cout<<endl;
    while(!game.getWinnerPlayer())
    {
        game.playerTurn();
    }
    

    return 0;
}

