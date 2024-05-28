#pragma once
#include <string>
#include "Deck.h"


class FCard : public FDeck
{
public:
	FCard();
	virtual ~FCard();

	void SetType(ECardType NewCardType);
	void SetShape(std::string NewShape);
	void SetNumber(int NewNumber);

protected:
	
	std::string Shape;
	int Numbers;

public:
	void Show();

};

