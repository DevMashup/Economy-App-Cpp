#pragma once

#include <iostream>
#include <string>
#include<vector>

#include "../../Economy/Jobs/Care/Nurse.h"
using namespace std;

class PickJobC {
private:
	Nurse nurse;
public:
	void PickAJob(string&, vector<int>&, float&);
};