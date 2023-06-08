#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "../Economy/Banks/ChooseBankE.h"
#include "../Economy/Shop/ShopE.h"

using namespace std;

class AppC {
private:
	ChooseBankE cbE;
	ShopE sE;
public:
	void Choices(vector<string>&);
};