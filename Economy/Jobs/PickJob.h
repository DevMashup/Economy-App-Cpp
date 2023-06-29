#pragma once

#include <iostream>
#include <vector>

#include "../../Tables/Job/PickJobT.h"
#include "../../Choices/Jobs/PickJobC.h"

using namespace std;

class PickJob {
private:
	PickJobT pJT;
	PickJobC pJC;
public:
	void JobPicker(vector<int>&, float&);
};