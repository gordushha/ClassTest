#include "insects.h"

TInsects::TInsects() : TAnimal()
{
	wings = 2;
	chitin = false;
	mustache = true;

}

int TInsects::GetWings()
{
	return wings;
}

bool TInsects::GetChitin()
{
	return chitin;
}

bool TInsects::GetMustache()
{
	return mustache;
}

void TInsects::SetMustache(bool m)
{
	mustache = m;
}

double TInsects:: Honey()
{
	return 8.0;
}

const char* TInsects::voice()
{
	return nullptr;
}

const char* TInsects::bite()
{
	return "yikes";
}
