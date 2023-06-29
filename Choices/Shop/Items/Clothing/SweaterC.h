#pragma once

#include <iostream>
#include <string>
#include <random>

#include "../../../../Economy/Shop/Items/Clothing/Sweater/Man/S/Small.h"
#include "../../../../Choices/Shop/ShopC.h"

using namespace std;

class SweaterC {
public:
	void SweaterChoice(vector<int>&, string& state, float& amount);
};