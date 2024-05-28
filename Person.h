#pragma once
#include <vector>

using namespace std; 

class FPerson
{
public:
	FPerson();
	virtual ~FPerson();

	vector<FCard*> Cards;

	void Draw(FCard* NewCard);
	int Check();
	void Show();

};

