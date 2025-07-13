#include "card.h"
#include <string>


std::string cardToString(const Card &card){
    std::string cardAsString = "";
    cardAsString += rankToChar(card.rank);
    cardAsString += suitToChar(card.suit);
    return cardAsString; 
}

char suitToChar(Suit s){
    switch(s)
    {
        case CLUB : return 'c';
        case DIAMOND: return 'd';
        case HEART: return 'h';
        case SPADE: return 's';
        default: return 'E';
    };
    
}
char rankToChar(Rank r){
    switch(r)
    {
        case TWO : return '2';
        case THREE:  return '3'; 
        case FOUR: return '4';
        case FIVE: return '5';
        case SIX: return '6'; 
        case SEVEN: return '7';
        case EIGHT: return '8';
        case NINE: return '9';
        case TEN: return 'T';
        case JACK: return 'J';
        case QUEEN: return 'Q';
        case KING: return 'K';
        case ACE: return 'A';
        default: return 'E';
    };
}