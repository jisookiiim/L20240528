#include <iostream>
#include "Player.h"
#include "Dealer.h"
#include "Deck.h"
#include "Person.h"
#include "Card.h"

using namespace std;

int main()
{

	FPlayer Player;
	FDealer Dealer;
	FDeck Deck;

	srand(time(nullptr));
	int PlayerFirstCard = (rand() % 13) + 1;
	int PlayerSecondCard = (rand() % 13) + 1;

	//DrawCard (rand() % 13) + 1

	while(true);
	{
		Deck.Shuffle();
		Deck.Pick();
		Deck.Pick();

		Dealer.Open();

	}

	

	return 0;

}



//Player has a Card
