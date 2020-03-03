#pragma once
#include "mammal.h"

class TDolphin : public TMammal
{
public:
	TDolphin();
	virtual const char* voice();
	int Echo();
};