#ifndef DECK_H
#define DECK_H

#include <vector>
#include "Carta.h"

class Deck {
public:
    Deck();
    void shuffle();
    Card drawCard();

private:
    std::vector<Card> cards;
    int nextCardIndex;
};

#endif
