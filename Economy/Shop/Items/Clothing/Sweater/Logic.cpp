#include "Logic.h"

void Logic::DoLogic(int num, string& state, vector<int>& sweaterCount, float& amount)
{

	if (state == "B" || state == "b") {
		float total = num * 15;
		float CheckBankAmount = caE.amount - total;

		if (CheckBankAmount < 0) {
			cout << "Sorry, you dont have enough money to purchase this. You cn earn money by selling stuff, or selling a job";
		}
		else {
			cout << "Thankyou for shoping at Clothing Emporium. Have fun with your" << num << " sweaters";

			for (int i = 0; i < num; i++) {
				sweaterCount.push_back(num);
			}
			amount -= total;

			sTF.Reciept(total);
		}
	}
	else if (state == "S" || state == "s") {
		if (sweaterCount.empty()) {
			cout << "Looks like you have no sweaters to sell";
		}
		else {
			if (num > sweaterCount.size()) {
				cout << "Looks like you only have " << sweaterCount.size() << " to sell";
			}
			else {
				for (int i = 0; i < sweaterCount.size(); i++) {
					sweaterCount.erase(sweaterCount.begin(), sweaterCount.end()); //Doesntactually delete them
				}
				
				int total = num * 8;
				cout << "Congrots, you sold " << num << " sweaters for " << total << "$ bucks" << endl;
				amount += total;

				sTF.Reciept(total);
			}
		}

	}
}
