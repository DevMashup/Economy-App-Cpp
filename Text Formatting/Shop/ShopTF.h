#pragma once

#include <iostream>

#include "../AppTF.h"

using namespace std;

class ShopTF {
private:
	AppTF aTF;
	
	void ShopLogo();
	void ShopDesc();
public:
	void BeginShop();
};