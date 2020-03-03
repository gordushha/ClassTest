#pragma once
#include "animal.h"

class TMammal : public TAnimal
{
protected:
	int sex;
	bool spine;
	bool fur;

public:
	TMammal();

	int GetSex();
	bool GetSpine();
	bool GetFur();

	void SetFur(bool f);

	double Milk();
	virtual const char* voice();
};