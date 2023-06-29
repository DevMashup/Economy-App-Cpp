#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "Items/Clothing/SweaterC.h"

using namespace std;

class ShopC {
public:
	void ItemChoice(vector<string>&, string&, vector<int>&, float& amount);
};