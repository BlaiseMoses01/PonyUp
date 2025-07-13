#ifndef CARD_H
#define CARD_H 

#include <string> 

enum Suit 
{
    CLUB, 
    DIAMOND, 
    HEART,
    SPADE
};

enum Rank {
    TWO=2,
    THREE,
    FOUR,
    FIVE, 
    SIX, 
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
    ACE
};

struct Card{
    Rank rank; 
    Suit suit; 
};

std::string cardToString(const Card& c);
Card stringToCard(const std::string& s); 
char rankToChar(Rank r);
char suitToChar(Suit s);

#endif
