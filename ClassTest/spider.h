#pragma once
#include "insects.h"

class TSpider : public TInsects
{
public:
	TSpider();
	virtual const char* voice();
	virtual const char* bite();
};