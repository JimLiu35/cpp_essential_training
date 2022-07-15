#include "deck.h"

int main() {
    Deck d1;
    d1.new_deck(8);
    d1.deck_info();
    d1.shuffle_deck();
    d1.deal_card();
    d1.deal_card();
    d1.deal_card();
    return 0;
}