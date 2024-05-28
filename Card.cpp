#include "Card.h"
#include <iostream>

using namespace std;

FCard::FCard()
{
	Type = ECardType::None;
	Type = (ECardType)1;
	Shape = "";
	Numbers = 0;
}

FCard::~FCard()
{
}

void FCard::SetShape(std::string NewShape)
{
	Shape = NewShape;
}

void FCard::SetNumber(int NewNumber)
{
	if (NewNumber >= 1 && NewNumber <= 13)
	{
		Number = NewNumber;
	}
}

void FCard::Show()
{
	cout << Shape << " " << endl;
}


