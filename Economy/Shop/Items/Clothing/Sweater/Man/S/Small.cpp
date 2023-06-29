#include "Small.h"

void Small::Red::BuySweater(vector<int>& sweaterCount, string& state, float& amount)
{
	ContinueApp ca;

	int num;
	cout << "Welcome to Clothes Emporium, Men's small red Sweaters here cost 15$ each.\nHow many would you like to buy?: ";
	cin >> num;
	l.DoLogic(num, state, sweaterCount, amount);


	cout << "Would you like to go back to the main menu?: (Type 'Y' or 'N')";
	cin >> decide;


	if (decide == "Y" || decide == "y") {
		ca.ConApp(sweaterCount, amount);
	}
	else if (decide == "N" || decide == "n") {
		exit(0);
	}
}

void Small::Red::SellSweater(vector<int>& sweaterCount, string& state, float& amount)
{
	ContinueApp ca;

	int num;
	cout << "Welcome to Clothes Emporium, Men's small red Sweaters here sell for 8$.\nHow many would you like to sell?: ";
	cin >> num;
	l.DoLogic(num, state, sweaterCount, amount);


	cout << "Would you like to go back to the main menu?: (Type 'Y' or 'N')";
	cin >> decide;


	if (decide == "Y" || decide == "y") {
		ca.ConApp(sweaterCount, amount);
	}
	else if (decide == "N" || decide == "n") {
		exit(0);
	}
}
