#pragma once
#include "mammal.h"

class THuman : public TMammal
{
public:
	THuman();
	virtual const char* voice();
	const char* work();

};