//Console width at full screen is 212

#include "AppTF.h"

void AppTF::Warning()
{
	cout << "You need to enter full screen mode in order to get this application formatted correctly" << endl;
	SpacingVer();
}

//Find out how to mae a global variable so I can use it in a for loop
//Change the character number
void AppTF::AppLogo()
{
	SpacingHor(); //52
	cout << "                                                    ------------------------------" << endl;
	SpacingHor();
	cout << "                                                    |                            |" << endl;
	SpacingHor(); 
	cout << "                                                    |   WELCOME TO THE ECONOMY   |" << endl;
	SpacingHor();
	cout << "                                                    |        APPLICATION         |" << endl;
	SpacingHor();
	cout << "                                                    |                            |" << endl;
	SpacingHor();
	cout << "                                                    ------------------------------" << endl;
	SpacingVer();
}

void AppTF::AppDesc()
{
	SpacingHor();
	cout << "I made ths application so you could simulate the Economy & Market and do stuff like open a bank account, shop, trsade stocks, become a" << endl;
	SpacingHor();
	cout << "               millionare and basically anything you can do in the real world when it comees to the Economy and Market";
	SpacingVer();
	SpacingVer();
}

void AppTF::BeginApp() {
	Warning();
	AppLogo();
	AppDesc();

}

void AppTF::SpacingHor()
{
	cout << "                                "; //<--32
}

void AppTF::SpacingVer()
{
	cout << "" << endl;
}
