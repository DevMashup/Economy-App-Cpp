//Have suboptions indented and starting with a hyphen

#include "AppT.h"

void AppT::Note()
{
	cout << "NOTE: '-' is used for a suboption that extends from the base option(Don't type the hyphen)" << endl;
	aTF.SpacingVer();
}

void AppT::AddItems(vector<string>& items)
{
	items.push_back("NULL");
	items.push_back("Bank");
	items.push_back("Shop");
	items.push_back("Job");
	items.push_back(" -C");
	items.push_back(" -B");
	items.push_back("Test");
	items.push_back("Test");
	items.push_back(" -S");
}

void AppT::Options()
{
	Note();

	vector<string> items;
	AddItems(items);

	for (int i = 1; i < items.size(); i++) {
		cout << items[i] << "     ";

		if (i % 3 == 0) {
			cout << "" << endl;
		}
	}

	aTF.SpacingVer();
	aTF.SpacingVer();
}
