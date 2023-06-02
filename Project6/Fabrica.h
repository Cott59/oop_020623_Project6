#pragma once
#include"Food.h"

class Fabrica
{
public:
	Milk* CreateMilk();
	Bread* CreateBread();
	Food* CreateRandom();
};