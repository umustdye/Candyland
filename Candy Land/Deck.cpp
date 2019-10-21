/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Deck.cpp
 * Author: Heidi2
 * 
 * Created on October 17, 2019, 10:15 PM
 */

#include "Deck.h"

Deck::Deck() 
{
    fillDeck();
    reshuffle();
}

void Deck::fillDeck()
{
        //single space card
    for(int i=0; i<6; i++)
    {
       ogDeck.push_back("Single Red");
       ogDeck.push_back("Single Orange");
       ogDeck.push_back("Single Yellow");
       ogDeck.push_back("Single Green");
       ogDeck.push_back("Single Blue");
       ogDeck.push_back("Single Purple");
    }
    
    //double space card
    for(int i=0; i<4; i++)
    {
       ogDeck.push_back("Double Red");
       ogDeck.push_back("Double Orange");
       ogDeck.push_back("Double Yellow");
       ogDeck.push_back("Double Green");
       ogDeck.push_back("Double Blue");
       ogDeck.push_back("Double Purple");
    }
    
    
    //specialty cards
    ogDeck.push_back("Plumpy");
    ogDeck.push_back("Mr. Mint");
    ogDeck.push_back("Gramma Nut");
    ogDeck.push_back("Frostline");
    ogDeck.push_back("Jolly");
    ogDeck.push_back("Princess Lolly");
        
    //how many cards are in the deck
    this->deckSize = ogDeck.size();
}

void Deck::reshuffle()
{
    srand(static_cast<unsigned int>(time(0)));
    //shuffle the deck
    random_shuffle(ogDeck.begin(), ogDeck.end());
    //copy the values over into a queue
    for(int i=0; i<deckSize; i++)
    {
        shuffledDeck.push(ogDeck.front());
        ogDeck.pop_front();
    }
    fillDeck();
    
}

void Deck::ifEmpty()
{
    if(shuffledDeck.size() == 0)
    {
        reshuffle();
    }
}
int Deck::getDeckSize()
{
    return shuffledDeck.size();
}

string Deck::getCard()
{
    string card = shuffledDeck.front();
    shuffledDeck.pop();
    return card;
}

void Deck::outputMove(string card)
{
    cout<<card<<endl;
}

