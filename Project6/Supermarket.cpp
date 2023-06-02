#include"Supermarket.h"

void Supermarket::ShowDataOfProducts() 
{
	if (_products.size() > 0)
	{
		for (const auto &it : _products) 
		{
			it->ShowData();
			std::cout << '\n';
		}
		
		return;
	}

	std::cout << "Products are sold out" << '\n';
}

void Supermarket::AddProduct(Food *food) 
{
	_products.push_back(food);
}

Food *Supermarket::SearchByName(std::string name)
{
	for (const auto &it : _products) 
	{
		if (it->GetName() == name)
			return it;
	}
}

void Supermarket::Buy(std::string name) 
{
	int index = 0;

	for (const auto &it : _products) 
	{

		if (it->GetName() == name)
		{
			delete(it);
			_products.erase(_products.begin() + index);
		}

		index++;
	}
}