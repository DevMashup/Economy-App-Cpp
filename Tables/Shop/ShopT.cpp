//Have suboptions indented and starting with a hyphen

#include "ShopT.h"

void ShopT::Note()
{
	cout << "NOTE: '-' is used for a suboption that extends from the base option(Don't type the hyphen)" << endl;
	aTF.SpacingVer();
}

void ShopT::AddItems(vector<string>& items)
{
	items.push_back("NULL");
	items.push_back("Sweater");
	items.push_back("Pants");
	items.push_back("Skirt");
	items.push_back("Shirt");
	items.push_back("Tennis Racket");
	items.push_back("Tennis Ball");
	items.push_back("Dog Food");
	items.push_back(" -Men");

	
}

void ShopT::Options()
{
	Note();

	vector<string> items;
	AddItems(items);

	for (int i = 1; i < items.size(); i++) {
		cout << items[i] << "     ";

		if (i % 7 == 0) {
			cout << "" << endl;
		}
	}

	aTF.SpacingVer();
	aTF.SpacingVer();
}
