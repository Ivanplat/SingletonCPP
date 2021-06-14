#include <iostream>
#include "Singletone.h"





int main()
{

	Singletone::Instance().Init();

	std::cout << Singletone::Instance().Height;

	return 0;
}