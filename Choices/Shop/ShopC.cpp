#include "ShopC.h"

void ShopC::ItemChoice(vector<string>& itemChoice, string& state, vector<int>& itemCount, float& amount)
{
	string getFirstWord = itemChoice[0];
	getFirstWord[0] = toupper(getFirstWord[0]);
	string item = getFirstWord[0] + getFirstWord.substr(1, getFirstWord.length() - 1);
	
	vector<int> sweaterCount;

	if (item == "Sweater") {
		SweaterC sC;
		for (int i = 0; i < itemCount.size(); i++) {
			sweaterCount.push_back(i);
		}

		sC.SweaterChoice(sweaterCount, state, amount);
	}
}
