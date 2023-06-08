#include "ShopTF.h"

void ShopTF::ShopLogo()
{
	cout << "------------------" << endl;
	cout << "|                |" << endl;
	cout << "|   WELCOME TO   |" << endl;
	cout << "|    THE SHOP    |" << endl;
	cout << "|                |" << endl;
	cout << "------------------" << endl;

	aTF.SpacingVer();
	aTF.SpacingVer();
}

void ShopTF::ShopDesc()
{
	cout << "Here's where you buy and sell items. We have so many items you can check out here like clothing, cars, food, toys, entertainment and much, much more" << endl;
	aTF.SpacingVer();
}

void ShopTF::BeginShop()
{
	ShopLogo();
	ShopDesc();
}
