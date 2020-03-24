#include "bee.h"

TBee::TBee () : TInsects ()
{
	limbcount = 6;
	color = 1;
	systemcount = 4;

}

const char* TBee::voice()
{
	return "BBBBZZZZ";
}

const char* TBee::bite()
{
	return "I don't bite";
}