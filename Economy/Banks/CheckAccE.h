#pragma once

#include <iostream>
#include <string>

#include "../../Text Formatting/Banks/CheckAccTF.h"

using namespace std;

class CheckAccE {
public:
	CheckAccTF c;

	void OpenAccount();
	float getAmount(float&);

	bool hasJob = false;
	float amount = 500;
};