#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "../Economy/Banks/ChooseBankE.h"
#include "../Economy/Shop/ShopE.h"
#include "../Economy/Jobs/PickJob.h"

using namespace std;

class AppC {
private:
	ChooseBankE cbE;
	PickJob dJ;
public:
	void Choices(vector<string>&, vector<int>&, float&);
};