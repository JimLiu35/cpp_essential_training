#include "deck.h"

Deck::Deck()
{
    setDeckNo(1); 
    cardsCount();
}

Deck::~Deck()
{
}

void Deck::setDeckNo(const int n)
{
    Nodeck = n;
}

void Deck::cardsCount()
{
    Nocards = 52 * Nodeck;
}

void Deck::shuffle_deck()
{
    int shuffleArray[Nocards];
    srand((unsigned)time(NULL));
    int i = 0;
    while (i < Nocards)
    {
        shuffleArray[i] = rand() % Nocards;
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
    idxCards = shuffleArray;
    // return shuffleArray;
}

void Deck::new_deck()
{
    if (Nodeck + 1 <= 10)
    {
        Nodeck++;
        cardsCount();
    }
    else
    {
        puts("Maximum 10 decks are allowed!");
    }
}

void Deck::new_deck(const int n)
{
    if (Nodeck + n <= 10)
    {
        Nodeck = Nodeck + n;
        cardsCount();
    }
    else
    {
        puts("Maximum 10 decks are allowed!");
        printf("%d more decks are created.\n", Nodeck + n - 10);
        Nodeck = 10;
        cardsCount();
    }
}

void Deck::deal_card()
{
    int deckIdx = *idxCards % 52;
    int typeIdx = deckIdx / 13;
    int valueIdx = deckIdx % 13;
    if (typeIdx == 0)
    {
        // Card type is 'c'.
        printf("This card is a Clubs %c.\n", Cards.value[valueIdx]);
    }
    else if (typeIdx == 1)
    {
        // Card type is 'd'
        printf("This card is a Diamond %c.\n", Cards.value[valueIdx]);
    }
    else if (typeIdx == 2)
    {
        // Card type is 'h'
        printf("This card is a Hearts %c.\n", Cards.value[valueIdx]);
    }
    else
    {
        // Card type is 's'
        printf("This card is a Spades %c.\n", Cards.value[valueIdx]);
    }
    Nocards--;
    printf("There are %d cards remaining in the deck.\n", Nocards);
    idxCards++;
}

void Deck::deck_info()
{
    printf("No. of Deck: %d\n", Nodeck);
    printf("No. of Cards: %d\n", Nocards);
}