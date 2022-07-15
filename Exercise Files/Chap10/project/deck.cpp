#include "deck.h"

namespace JL{
deck::deck()
{
    deckId[maxSize] = 1;
    noofDeck = 1;
    for (int i = 0; i < 52; i++)
    {
        strcpy(&cardTotal[i][3], &card[i][3]);
        printf("Card %d is %s.\n", i, cardTotal[i]);
    }
}

deck::deck(const int n)
{
    noofDeck = n;
    if (n > 10)
    {
        puts("Maximum 10 decks can be created!");
        noofDeck = 10;
    }
    for (int i = 0; i < noofDeck; i++)
    {
        deckId[i] = i + 1;
    }
    int j = 0;
    for (int i = 0; i < 52 * noofDeck; i++)
    {
        strcpy(&cardTotal[i][3], &card[j][3]);
        j++;
        if (j >= 52)
        {
            j = 0;
        }
    }
}

deck::~deck()
{
}

void deck::shuffle_deck()
{
    int size = 52 * noofDeck;
    srand((unsigned)time(NULL));
    int shuffleArray[size];
    int i = 0;
    while (i < size)
    {
        shuffleArray[i] = rand() % size;
        if (i == 0)
        {
            i++;
        }
        else
        {
            int m = i;
            for (int j = 0; j < m; j++)
            {
                if (shuffleArray[i] == shuffleArray[j])
                {
                    j = m + 1;
                }
                if (j == m - 1 && shuffleArray[i] != shuffleArray[j])
                {
                    i++;
                }
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        shuffleIdx[i] = shuffleArray[i];
    }
}

const cards & deck::deal_card() {
    // int size = 52 * noofDeck;
    Card.remainNo = 52 * noofDeck;
    strcpy(Card.nextCard, cardTotal[shuffleIdx[0]]);
    *shuffleIdx = *shuffleIdx + 1;
    Card.remainNo--;
    return Card;
}

void deck::getIdx(){
    for (int i = 0; i < 52 * noofDeck; i++)
    {
        printf("Deck No. %d.\n", shuffleIdx[i]);
    }
}
}