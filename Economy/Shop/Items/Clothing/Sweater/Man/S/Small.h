#pragma once

#include <iostream>

#include "../../../../../../../RND/ContinueApp.h"
#include "../../Logic.h"

using namespace std;
class Small {
public:
	class Red{
	private:
		Logic l;
		string decide;
	public:
		void BuySweater(vector<int>&, string&, float&);
		void SellSweater(vector<int>&, string&, float&);
	};
	class Purple {
	public:
		void BuySweater();
		void SellSweater();
	};
	class Blue {
	public:
		void BuySweater();
		void SellSweater();
	};
};