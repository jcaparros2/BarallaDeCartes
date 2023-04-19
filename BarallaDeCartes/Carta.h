#ifndef CARD_H
#define CARD_H

enum Suited {
    CORAZONES,
    DIAMANTES,
    TREBOLES,
    PICAS
};

enum Ranking {
    ACE,
    DOS,
    TRES,
    CUATRO,
    CINCO,
    SEIS,
    SIETE,
    OCHO,
    NUEVE,
    DIEZ,
    JACK,
    QUEEN,
    KING
};

struct Card {
    Suited suit;
    Ranking rank;
};

#endif
