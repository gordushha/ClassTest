#include "mammal.h"

TMammal::TMammal() : TAnimal()
{
	sex = 0;
	fur = false;
	spine = false;

}

int TMammal::GetSex()
{
	return sex;
}

bool TMammal::GetSpine()
{
	return spine;
}

bool TMammal::GetFur()
{
	return fur;
}

void TMammal::SetFur(bool f)
{
	fur = f;
}

double TMammal::Milk()
{
	return 0.0;
}

const char* TMammal::voice()
{
	return "AAA";
}
