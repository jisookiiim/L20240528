#include "Deck.h"
#include "Card.h"

FDeck::FDeck()
{
	for (int Type = 0; Type < 4; Type++)
	{
		for (int Number = 1; Number <= 13; Number++)
		{
			FCard* Temp = new FCard();
			switch (Type)
			{
			case 0:
				Temp->SetType(ECardType::Clova);
			case 1:
				Temp->SetType(ECardType::Clova);
			case 2:
				Temp->SetShape = "Clova"; break;
			case 3:
				Temp->SetShape = "Heart"; break;
			}
			Temp->SetNumber = Number;

			Cards.push_back(Temp);
		}

	}

}

FDeck::~FDeck()
{
}

void FDeck::Shuffle()
{
}

void FDeck::Pick()
{
}

void FDeck::Check()
{

	for (FCard* Card : Cards)
	{
		Card->Show();
	}
}
