#include "ChooseBankE.h"

void ChooseBankE::ChooseBank()
{
	string userInput;

	cout << "Welcome! We're so glad you've decided to open a bank account today. Here's the bank you can choose: ";
	bT.Options();

	cout << "What bank would you like to open?: ";
	getline(cin, userInput);

	vector<string> words = s.split(userInput, " ");
	bC.BankType(words);
}
