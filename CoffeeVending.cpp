#include "CoffeeVending.h"

void CoffeeVending::show()
{
	cout << left;   //allign to the left (manipulator)
	cout << setw(10) << "Coffee";   //sets the width to 10 characters (manipulator)
	for (int i = 0; i < coffee; i++)
	{
		cout << "*";
	}
	cout << endl;

	cout << setw(10) << "Sugar";
	for (int i = 0; i < sugar; i++)
	{
		cout << "*";
	}
	cout << endl;

	cout << setw(10) << "Cream";
	for (int i = 0; i < cream; i++)
	{
		cout << "*";
	}
	cout << endl;

	cout << setw(10) << "Water";
	for (int i = 0; i < water; i++)
	{
		cout << "*";
	}
	cout << endl;

	cout << setw(10) << "Cup";
	for (int i = 0; i < cup; i++)
	{
		cout << "*";
	}
	cout << endl << endl;
}

int CoffeeVending::menu()
{
	cout << "Normal Coffee: 0, Sugar Coffee: 1, Black Coffee: 2, Fill: 3, Exit: 4 >> ";
	int n = 0;
	cin >> n;
	return n;
}

void CoffeeVending::normalC()
{
	if (coffee <= 0 || water <= 0 || cup <= 0)
	{
		cout << "Not enough" << endl;
		return;
	}
	cout << "Noraml Coffee" << endl;
	coffee--;
	water--;
	cup--;
	show();
}

void CoffeeVending::sugarC()
{
	if (coffee <= 0 || sugar <= 0 || water <= 0 || cup <= 0)
	{
		cout << "Not enough" << endl;
		return;
	}
	cout << "Sugar Coffee" << endl;
	coffee--;
	sugar--;
	water--;
	cup--;
	show();
}

void CoffeeVending::blackC()
{
	if (coffee <= 0 || water <= 0 || cup <= 0)
	{
		cout << "Not enough" << endl;
		return;
	}
	cout << "Black Coffee" << endl;
	coffee--;
	water--;
	cup--;
	show();
}

void CoffeeVending::fill()
{
	cout << "Filling.." << endl;
	coffee = 3;
	sugar = 3;
	water = 3;
	cream = 3;
	cup = 3;
	show();
}
