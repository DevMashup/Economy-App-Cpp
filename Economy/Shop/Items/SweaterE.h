#pragma once

using namespace std;

#include <iostream>
#include <string>
#include <vector>

#include "../../Banks/CheckAccE.h"
#include "../../../Text Formatting/Shop/Items/SweaterTF.h"

using namespace std;

class SweaterE {
private:
	CheckAccE caE;
	SweaterTF sTF;

	void Logic(int, string&);

	vector<string> NumOfSweaters;
public:
	void BuySweater(string&);
	void SellSweater(string&);
};