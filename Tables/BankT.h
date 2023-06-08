#pragma once

#include <iostream>
#include <vector>
#include <string>

#include "../Text Formatting/AppTF.h"

using namespace std;

class BankT {
private:
	AppTF aTF;
	void Note();
	void AddItems(vector<string>& items);
public:
	void Options();
};
