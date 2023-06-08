#pragma once

#include <iostream>
#include <vector>
#include <string>

#include "../../Text Formatting/Shop/ShopTF.h"
#include "../../Tables/Shop/ShopT.h"
#include "../../RND/Split.h"
#include "../../Choices/Shop/ShopC.h"

using namespace std;

class ShopE {
private:
	ShopTF sTF;
	ShopT sT;
	Split s;
	ShopC sC;
public:
	void ShopBuy(string&);
	void ShopSell(string&);
};