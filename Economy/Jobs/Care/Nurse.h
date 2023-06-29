#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "../../../Economy/Banks/CheckAccE.h";
#include "../../../RND/ContinueApp.h"

using namespace std;

class Nurse {
private:
	CheckAccE cAE;
	ContinueApp ca;
public:
	void BeNurse(vector<int>&,float&);
};
