#include "BankC.h"

void BankC::BankType(vector<string>& word)
{
	if (word[0] == "Checking" || word[0] == "checking") {
		if (word[1] == "Account" || word[1] == "Account") {
			caE.OpenAccount();
		}
	}
}
