#include "ShopC.h"

void ShopC::ItemChoice(vector<string>& itemChoice, string& state)
{
	if (itemChoice[0] == "Sweater" || itemChoice[0] == "sweater") {
		if (state == "B" || state == "b") {
			sE.BuySweater(state);
		}
		else if (state == "S" || state == "s") {
			sE.SellSweater(state);
		}
	}
}
