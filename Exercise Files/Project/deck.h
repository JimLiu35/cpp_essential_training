#ifndef deck_h_
#define deck_h_

#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <ctime>

class Deck
{
private:
    struct Card {
        char type[4][1] = {'c', 'd', 'h', 's'};
        char value[14] = "A23456789TJQK"; 
        // {'A', '2', '3', '4', '5', '6',
        // '7', '8', '9', 'T', 'J', 'Q', 'K'};
    } Cards;
    int Nodeck = 1;
    int Nocards;
    int * idxCards;
public:
    Deck();
    ~Deck();
    void shuffle_deck();
    void setDeckNo(const int n);
    void cardsCount();
    void new_deck();
    void new_deck(const int n);
    void deal_card();
    void deck_info();
};

#endif