#include "Start.h"

void Start::start()
{
	cout << "Turning on the Coffee vending machine" << endl;

	CoffeeVending cv;
	cv.show();
	while (true)
	{
		int x = cv.menu();

		if (x == 0)
		{
			cv.normalC();
		}
		else if (x == 1)
		{
			cv.blackC();
		}
		else if (x == 2)
		{
			cv.sugarC();
		}
		else if (x == 3)
		{
			cv.fill();
		}
		else if (x == 4)
		{
			cout << "Turning Off" << endl;
			break;
		}
		else
		{
			cout << "Try Again" << endl;
		}
	}
}