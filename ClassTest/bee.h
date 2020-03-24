#pragma once
#include "insects.h"

class TBee : public TInsects
{
public:
	TBee();
	virtual const char* voice();
	virtual const char* bite();
};