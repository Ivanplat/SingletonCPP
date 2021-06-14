#include "Singletone.h"

Singletone& Singletone::Instance()
{
	static Singletone single;
	return single;
}

void Singletone::Init()
{
	Width = 100;
	Height = 200;
}
