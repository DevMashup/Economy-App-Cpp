#include "ContinueApp.h"

void ContinueApp::ConApp(vector<int>& itemCount, float& amount)
{
	
	AppC aC;
	
	aT.Options();
	if (itemCount.size() == 0) {
		itemCount = {};
	}

	cout << "What would you like to do?: ";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(cin, userInput); //<--Error here
	vector<string> words = s.split(userInput, " ");

	aC.Choices(words, itemCount, amount);
}
