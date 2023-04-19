#include <algorithm>
#include <random>
#include <chrono>
#include "deck.h"

using namespace std;

Deck::Deck() : nextCardIndex(0) {
    for (int s = CORAZONES; s <= PICAS; s++) {
        for (int r = ACE; r <= KING; r++) {
            cards.push_back({ static_cast<Suited>(s), static_cast<Ranking>(r) });
        }
    }
}

void Deck::shuffle() {
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(cards.begin(), cards.end(), std::default_random_engine(seed));
    nextCardIndex = 0;
}

Card Deck::drawCard() {
    return cards[nextCardIndex++];
}
