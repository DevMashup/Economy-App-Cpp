#include "PickJobT.h"

void PickJobT::AddItems(vector<string>& items)
{
	items.push_back("NULL");
	items.push_back("Care");
	items.push_back("Test");
	items.push_back("Test");
	items.push_back("Test");
	items.push_back("Test");
	items.push_back(" -Nurse");


}

void PickJobT::JobOptioms()
{
	cout << "" << endl;
	vector<string> items;
	AddItems(items);

	for (int i = 1; i < items.size(); i++) {
		cout << items[i] << "     ";

		if (i % 5 == 0) {
			cout << "" << endl;
		}
	}
}
