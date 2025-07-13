#include "deck.h"
#include "card.h"
#include <algorithm> 
#include <random> 
#include <iostream> 

Deck::Deck()
{
    for(int i = CLUB ; i <= SPADE ; i++){
        for(int j = TWO; j<=ACE ; j++){
            Card c{static_cast<Rank>(j) , static_cast<Suit>(i)};
            deck.push_back(c);
        }
    }
}

void Deck::shuffle()
{
    std::random_device rd; 
    std::mt19937 rng(rd()); 
    std::shuffle(deck.begin() , deck.end() , rng);
}

Card Deck::draw()
{
    Card drawn = deck.front(); 
    removeCard();
    return drawn;
}

void Deck::removeCard()
{
    if(deck.size() > 0){
        deck.erase(deck.begin());
    }
}

void Deck::removeCards(int numOfCards)
{
    for(int i = 0 ; i < numOfCards; i++){
        removeCard();
    }
}

void Deck::printDeck(){
    for(Card card : deck){
        std::cout << cardToString(card) << "\n";
    }
}

int main(void) 
{
    Deck deck; 
    deck.printDeck();  
    deck.shuffle(); 
    deck.printDeck();
    std::cout << deck.deck.size() << "\n"; 
    Card c = deck.draw();
    std::cout << cardToString(c) << "\n";
    std::cout << deck.deck.size() << "\n"; 
}