#include "human.h"

THuman::THuman() : TMammal()
{
	limbcount = 4;
	color = 0;
	systemcount = 5;
	fur = false;
}

const char * THuman::voice()
{
	return "I'm working";
}

const char * THuman::work()
{
	return "I'm on break";
}
