#include"Fabrica.h"
#include<vector>

Milk* Fabrica::CreateMilk()
{
	std::vector<int>fatPercent=
	{
		3, 5, 10, 15
	};


	Milk* milk = new Milk("Milk", 50.6f, 1.0f, fatPercent.at(0 + std::rand() % fatPercent.size()));
		return milk;
}


Bread* Fabrica::CreateBread()
{
	std::vector<std::string>type =
	{
		"Bojkjds", "sdf", "Black"
	};
	//type.at(1) = обращение к элементу по индексу
	std::string typee = type.at(0 + std::rand() % type.size());
	Bread* bread = new Bread("Bread", 50.6f, 2.4, typee);
	return bread;

}



Food* Fabrica::CreateRandom()
{
	int x = 0 + std::rand() % 2;

	if (x == 0)
		return CreateMilk();
	else
		if (x == 1)
			return CreateBread();
}
