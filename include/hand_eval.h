#ifndef HAND_EVAL_H
#define HAND_EVAL_H

#include "card.h"

enum HandRank 
{
    HIGH_CARD=1,
    PAIR=2,
    TWO_PAIR=3,
    THREE_OF_A_KIND=4,
    STRAIGHT=5, 
    FLUSH=6, 
    FULL_HOUSE=7, 
    QUADS=8,
    STRAIGHT_FLUSH=9 
}

struct Hand {
    HandRank rank; 
    std::vector<Cards>
}

class HandEval {
    public :
        static HandResult eval(const std::vector<Card> &cards);
}

#endif