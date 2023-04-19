#include <iostream>
#include "deck.h"

using namespace std;

int main() {
    Deck deck;
    deck.shuffle();

    // Repartim dues cartes aleatòries a l'usuari
    cout << "Les teves cartes: ";
    cout << deck.drawCard().rank << " de ";
    cout << deck.drawCard().suit << " i ";
    cout << deck.drawCard().rank << " de ";
    cout << deck.drawCard().suit << std::endl;

    // Mostrem les cinc cartes del crupier
    cout << "Les cartes del crupier: ";
    for (int i = 0; i < 5; i++) {
        cout << deck.drawCard().rank << " de ";
        cout << deck.drawCard().suit << ", ";
    }
    cout << std::endl;

    return 0;
}
