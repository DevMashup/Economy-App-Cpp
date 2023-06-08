#pragma once

#include <iostream>

#include "../../Tables/BankT.h"
#include "../../RND/Split.h"
#include "../../Choices/BankC.h"

using namespace std;

class ChooseBankE {
private:
	BankT bT;
	BankC bC;
	Split s;
public:
	void ChooseBank();
};