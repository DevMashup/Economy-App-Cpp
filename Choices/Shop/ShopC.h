#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "../../Economy/Shop/Items/SweaterE.h"

using namespace std;

class ShopC {
	SweaterE sE;
public:
	void ItemChoice(vector<string>&, string&);
};