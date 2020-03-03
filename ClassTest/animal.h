#pragma once

class TAnimal
{
protected:
	int limbcount;
	int color;
	int systemcount;

public:
	TAnimal();
	
	int getlimb();
	int getcolor();
	int getsystem();

	void setcolor(int c);
	void setlimb(int l);

	virtual const char* voice();
};