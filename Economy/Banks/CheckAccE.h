#pragma once

#include <iostream>
#include <string>

#include "../../Text Formatting/Banks/CheckAccTF.h"

using namespace std;

class CheckAccE {
public:
	CheckAccTF c;

	void OpenAccount();

	int m_Amount = 500;
};