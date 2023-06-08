#include <iostream>
#include <vector>
#include <string>

#include "Text Formatting/AppTF.h"
#include "Tables/AppT.h"
#include "Choices/AppC.h"
#include "RND/Split.h"

using namespace std;

int main() {
	AppTF aTF;
	AppT aT;
	AppC aC;
    Split s;

	string userInput;

	aTF.BeginApp();
	aT.Options();

	cout << "What would you like to do?: ";
    getline(cin, userInput);
	vector<string> words = s.split(userInput, " ");

    aC.Choices(words);
}