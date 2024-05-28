#include <iostream>
#include "Player.h"
#include "Dealer.h"
#include "Deck.h"
#include "Person.h"
#include "Card.h"

using namespace std;

enum class EType
{
	None = -1,
	Clova = 0,
	Spade,
	Heart,
	Diamond,
	Max
};

int main()
{
	FDeck Deck;

	vector<FPerson*> Persons;
	Persons.push_back(new FDealer);
	Persons.push_back(new FPlayer);
	Persons.push_back(new FPlayer);
	Persons.push_back(new FPlayer);
	Persons.push_back(new FPlayer);
	Persons.push_back(new FPlayer);

	for (int i = 0; i < person.size(); i++)
	{

		Persons[i]->Draw(Deck.Draw());
		Persons[i]->Draw(Deck.Draw());

	}

	for (int i = 0; i < person.size(); i++)
	{

		cout << :"Player" << score : " << Persons[i]->Check() << endl;

	}

	Fplayer Player;
	FDealer Dealer;
	

	Player.Draw(Deck.Draw());
	Player.Draw(Deck.)

	return 0;

}



//Player has a Card
