#include <vector>
#include <string>

#include "Text Formatting/AppTF.h"
#include "RND/ContinueApp.h"

using namespace std;

int main() {
	AppTF aTF;
	ContinueApp ca;

	vector<int> itemCount;
	float amount = 500.0f;
	
	aTF.BeginApp();
	ca.ConApp(itemCount, amount);
	
}