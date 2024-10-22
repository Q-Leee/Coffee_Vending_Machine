#pragma once
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class CoffeeVending
{
	int coffee, sugar, cream, water, cup;
public:
	CoffeeVending(int coffee = 3, int sugar = 3, int cream = 3, int water = 3, int cup = 3) :
		coffee(coffee), sugar(sugar), cream(cream), water(water), cup(cup) {}
	void show();
	int menu();
	void normalC();
	void sugarC();
	void blackC();
	void fill();
};
