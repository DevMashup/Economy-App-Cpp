#include "ShopE.h"

void ShopE::ShopBuy(string& state, vector<int>& itemCount, float& amount)
{
	ShopC sC;

	string userInput;

	sTF.BeginShop();

	cout << "Heres a list of everything you can buy or sell" << endl;

	sT.Options();

	cout << "What would you like to Buy?: ";
	getline(cin, userInput);
	vector<string> items = s.split(userInput, " ");

	sC.ItemChoice(items, state, itemCount, amount);


}

void ShopE::ShopSell(string& state, vector<int>& itemCount, float& amount)
{
	ShopC sC;

	string userInput;

	sTF.BeginShop();

	cout << "Heres a list of everything you can buy or sell" << endl;

	sT.Options();

	cout << "What would you like to Sell?: ";
	getline(cin, userInput);
	vector<string> items = s.split(userInput, " ");

	sC.ItemChoice(items, state, itemCount, amount);
}
