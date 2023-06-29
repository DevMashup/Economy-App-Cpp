#include "PickJob.h"

void PickJob::JobPicker(vector<int>& itemCount, float& amount)
{
	string decide;

	cout << "Welcome to Hire CO. Whatever job you want, we can help you pick the job. Here's some job options: ";
	pJT.JobOptioms();

	cout << "Well....Which one are you gonna choose?: ";
	cin >> decide;

	pJC.PickAJob(decide, itemCount, amount);
}
