#pragma once


#include <iostream>
#include <vector>
#include <string>

#include "../Economy/Banks/CheckAccE.h"

using namespace std;

class BankC {
private:
	CheckAccE caE;
public:
	void BankType(vector<string>&);
};