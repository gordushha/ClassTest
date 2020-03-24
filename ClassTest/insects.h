#pragma once
#include "animal.h"

class TInsects : public TAnimal
{
protected:
	int wings;
	bool chitin;
	bool mustache;

public:
	TInsects();

	int GetWings();
	bool GetChitin();
	bool GetMustache();

	void SetMustache(bool m);

	double Honey();
	virtual const char* voice();
	virtual const char* bite();
}
;