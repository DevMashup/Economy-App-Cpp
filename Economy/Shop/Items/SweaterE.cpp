#include "SweaterE.h"

void SweaterE::Logic(int num, string& state)
{
	string sweaterNum = "Sweater";
	int total = num * 30;
	
	if (state == "B" || state == "b") {
		int CheckBankAmount = caE.m_Amount - total;

		if (CheckBankAmount < 0) {
			cout << "Sorry, you dont have enough money to purchase this. You cn earn money by selling stuff, or selling a job";
		}
		else {
			cout << "Thankyou for shoping at Clothing Emporium. Have fun with your" << num << " sweaters";
			
			for (int i = 1; i <= num; i++) {
				string num = std::to_string(i);
			
				NumOfSweaters.push_back(num);
			}
			caE.m_Amount -= total;

			sTF.Reciept(total);
		} 
	}
	else if (state == "S" || state == "s") {
		if (!NumOfSweaters.empty()) {
			int newBankAmount = caE.m_Amount + total;

			cout << "Congrots, you sold " << num << " sweaters for " << total << "$ bucks" << endl;
			caE.m_Amount += total;

			sTF.Reciept(total);
		}
		else {
			cout << "Looks like you dont have any sweaters to sell";
		}
		
	}
}

void SweaterE::BuySweater(string& state)
{
	int num;
	cout << "Welcome to Clothes Emporium, Sweaters here cost 30$ each.\nHow many would you like to buy?: ";
	cin >> num;
	Logic(num, state);
}

void SweaterE::SellSweater(string& state)
{
	int num;
	cout << "Welcome to Clothes Emporium, Sweaters here sell for 30$ each.\nHow many would you like to sell?: ";
	cin >> num;
	Logic(num, state);
}
