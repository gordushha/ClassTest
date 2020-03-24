#include "animal.h"
#include "mammal.h"
#include "human.h"
#include "dolphin.h"
#include "insects.h"
#include "bee.h"
#include "spider.h"
#include <iostream>

using namespace std;

int main()
{
	TDolphin Pasha;
	TBee Alina;
	TSpider Nick;
	THuman Yulia;
	cout << Pasha.voice() << endl;
	cout << Alina.bite() << endl;
	cout << Nick.voice() << endl;
	cout << Yulia.voice() << endl;
	cout << Yulia.work() << endl;
	cout << Nick.bite() << endl;

}
