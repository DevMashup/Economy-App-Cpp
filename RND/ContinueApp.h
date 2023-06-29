#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <limits>

#include "../Tables/AppT.h"
#include "../Choices/AppC.h"
#include "../RND/Split.h"
#include "../Economy/Banks/CheckAccE.h"

using namespace std;

class ContinueApp {
private:
	AppT aT;
	Split s;
	CheckAccE caE;

	string userInput;
public:
	void ConApp(vector<int>&, float&);
};