#include "AppC.h"

void AppC::Choices(vector<string>& words, vector<int>& itemCount, float& amount)
{

	if (words[0] == "Bank" || words[0] == "bank") {
		if (words[1] == "C" || words[1] == "c") {
			cbE.ChooseBank();
		}
	}
	else if (words[0] == "Shop" || words[0] == "shop") {
		ShopE sE;
		if (words[1] == "B" || words[1] == "b") {
			sE.ShopBuy(words[1], itemCount, amount);
		}
		else if (words[1] == "S" || words[1] == "s") {
			sE.ShopSell(words[1], itemCount, amount);
		}
	}
	else if (words[0] == "Job" || words[0] == "job") {
		dJ.JobPicker(itemCount, amount);
	}
}
