#include "PickJobC.h"

void PickJobC::PickAJob(string& jobType, vector<int>& itemCount, float& amount)
{
	if (jobType == "Nurse" || jobType == "nurse") {
		nurse.BeNurse(itemCount, amount);
	}
}
