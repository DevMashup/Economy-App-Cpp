#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "../../../../Banks/CheckAccE.h"
#include "../../../../../Text Formatting/Shop/Items/SweaterTF.h"

using namespace std;
class Logic {
private:
	CheckAccE caE;
	SweaterTF sTF;

	
public:
	void DoLogic(int, string&, vector<int>&, float&);
};