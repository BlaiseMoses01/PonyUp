#ifndef DECK_H
#define DECK_H

#include "card.h"
#include <random> 
#include <vector>

class Deck {
    public : 
    std::vector<Card> deck; 
    
    Deck();
    void shuffle();
    Card draw();
    void removeCard(); 
    void removeCards(int numOfCards);  
    void printDeck();

};

#endif