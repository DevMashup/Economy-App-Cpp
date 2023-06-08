//Have suboptions indented and starting with a hyphen

#include "BankT.h"

void BankT::Note()
{
	cout << "NOTE: '-' is used for a suboption that extends from the base option(Don't type the hyphen)" << endl;
	aTF.SpacingVer();
}

void BankT::AddItems(vector<string>& items)
{
	items.push_back("NULL");
	items.push_back("Checking Account");
	items.push_back("Savings Account");
}

void BankT::Options()
{
	Note();

	vector<string> items;
	AddItems(items);

	for (int i = 1; i < items.size(); i++) {
		cout << items[i] << "     ";

		if (i % 2 == 0) {
			cout << "" << endl;
		}
	}

	aTF.SpacingVer();
	aTF.SpacingVer();
}
