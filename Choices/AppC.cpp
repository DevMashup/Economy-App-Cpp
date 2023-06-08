#include "AppC.h"

void AppC::Choices(vector<string>& words)
{

	if (words[0] == "Bank" || words[0] == "bank") {
		if (words[1] == "C" || words[1] == "c") {
			cbE.ChooseBank();
		}
	}
	else if (words[0] == "Shop" || words[0] == "shop") {
		if (words[1] == "B" || words[1] == "b") {
			sE.ShopBuy(words[1]);
		}
		else if (words[1] == "S" || words[1] == "s") {
			sE.ShopSell(words[1]);
		}
	}
}
