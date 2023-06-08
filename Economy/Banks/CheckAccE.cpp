#include "CheckAccE.h"

void CheckAccE::OpenAccount()
{
	int age;
	string name;

	cout << "So glad you've decided to open a Checking account here at Banking Co. Before we can open your account, we just need to go over a few things." << endl;

	cout << "What's your name?: ";
	cin >> name;

	cout << "How old are you?: ";
	cin >> age;

	if (age < 18) cout << "Sorry, you're not old enough to open up a bank account." << endl;

	c.BankLog(name, m_Amount);
	cout << "As a thankyou for opening up an account at Banking Co., here's 500$ as a gift";
}
