#include "Nurse.h"

void Nurse::BeNurse(vector<int>& itemCount, float& amount)
{
	cAE.hasJob = true;
	cout << "Congrats! You became a nurse, yur starting salary is 18$ per call(Everytime you initialize this function)";

	float newBal;
	newBal = amount += 18.0f;
	cout << "Your new balance is " << newBal << " " << endl;

	string decision;
	cout << "Do you wanna go back to the main men?: (Type 'Y' for Yes and 'N' for No)";
	cin >> decision;

	if (decision == "Y") {
		ca.ConApp(itemCount, amount);
	}
}
