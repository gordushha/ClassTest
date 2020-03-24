#include "spider.h"

TSpider::TSpider() : TInsects()
{
	limbcount = 8;
	color = 2;
	systemcount = 4;
}

const char* TSpider::voice()
{
	return "shhh";
}

const char* TSpider::bite()
{
	return "I  bite";
}