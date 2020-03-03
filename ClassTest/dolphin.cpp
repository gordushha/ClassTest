#include "dolphin.h"
#include <stdlib.h>

TDolphin::TDolphin()
{
	systemcount = 5;
	color = 5;
	limbcount = 3;
}

const char * TDolphin::voice()
{
	return "EEE";
}

int TDolphin::Echo()
{
	return rand() % 20 + 5;
}
