#include "animal.h"

TAnimal::TAnimal()
{
	limbcount = 0;
	color = 0;
	systemcount = 0;
}

int TAnimal::getlimb()
{
	return limbcount;
}

int TAnimal::getcolor()
{
	return color;
}

int TAnimal::getsystem()
{
	return systemcount;
}

void TAnimal::setcolor(int c)
{
	color = c;
}
void TAnimal::setlimb(int l)
{
	limbcount = l;
}

const char * TAnimal::voice()
{
	return "";
}
