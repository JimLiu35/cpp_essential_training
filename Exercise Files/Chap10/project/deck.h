#ifndef deck_h
#define deck_h

#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <ctime>

namespace JL{

const int maxSize = 10;
struct cards
{
    char nextCard[3];
    int remainNo;
};

class deck
{
private:
    int deckId[maxSize];
    int noofDeck;
    const char card[52][3] = 
    {
        "As", "Ah", "Ad", "Ac",
        "2s", "2h", "2d", "2c",
        "3s", "3h", "3d", "3c",
        "4s", "4h", "4d", "4c",
        "5s", "5h", "5d", "5c",
        "6s", "6h", "6d", "6c",
        "7s", "7h", "7d", "7c",
        "8s", "8h", "8d", "8c",
        "9s", "9h", "9d", "9c",
        "Ts", "Th", "Td", "Tc",
        "Js", "Jh", "Jd", "Jc",
        "Qs", "Qh", "Qd", "Qc",
        "Ks", "Kh", "Kd", "Kc"
    };
    char cardTotal[52 * maxSize][3];
    int shuffleIdx[52 * maxSize];
    // int cardRemain;
    static cards Card;
public:
    deck();
    deck(const int n);
    ~deck();
    void shuffle_deck();
    const cards & deal_card();
    void getIdx();
};
}

#endif