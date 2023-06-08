#pragma once

#include <iostream>
#include <vector>
#include <string>

#include "../Text Formatting/AppTF.h"

using namespace std;

class AppT {
private:
	AppTF aTF;
	void Note();
	void AddItems(vector<string>& items);
public:
	void Options();
};