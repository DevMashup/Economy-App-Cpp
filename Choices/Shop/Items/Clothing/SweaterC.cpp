#include "SweaterC.h"

void SweaterC::SweaterChoice(vector<int>& sweaterCount, string& state, float& amount)
{
	string decision;

	cout << "Would you like a Man's sweater or a Women's sweater?: (Please type either Man or Women)";
	cin >> decision;
	cout << "" << endl;

	decision[0] = toupper(decision[0]);
	string gender = decision[0] + decision.substr(1, decision.length() - 1);

	if (gender == "Man") {
		string decision;

		cout << "Now, do you want S, M, L, or XL";
		cin >> decision;

		decision[0] = toupper(decision[0]);
		string size = decision[0] + decision.substr(1, decision.length() - 1);

		if (size == "S") {
			string decision;
			std::default_random_engine generator;
			std::uniform_int_distribution<int> distribution(1, 3);
			int inStock = distribution(generator);  // generates number in the range 1..6 

			if (inStock <= 3) {
				cout << "Great, we certainly can get a small sweater for you. Now, smalls do come in 3 color: red, purple and blue. Which color would you like?: ";
				cin >> decision;

				decision[0] = toupper(decision[0]);
				string color = decision[0] + decision.substr(1, decision.length() - 1);

				state[0] = toupper(state[0]);
				string newState = state[0] + state.substr(1, state.length() - 1);

				if (color == "Purple") {
					//Function to byuy sweater
				}
				else if (color == "Red") {
					Small::Red sR;
					if (newState == "B") {
						sR.BuySweater(sweaterCount, state, amount);
					}
					else if (newState == "S") {
						sR.SellSweater(sweaterCount, state, amount);
					}
				}
				else if (color == "Blue") {
					//Function to buy blue sweater
				}
			}
			else {
				exit(0);
			}
		}
		else if (size == "M") {
			string decision;
			std::default_random_engine generator;
			std::uniform_int_distribution<int> distribution(1, 4);
			int inStock = distribution(generator);  // generates number in the range 1..6 

			if (inStock <= 3) {
				cout << "Great, we certainly can get a Medium sweater for you. Now, Mediums do come in 7 color: red, purple, blue, black, gray, orange and green . Which color would you like?: ";
				cin >> decision;

				decision[0] = toupper(decision[0]);
				string color = decision[0] + decision.substr(1, decision.length() - 1);

				if (color == "Purple") {
					//Function to byuy sweater
				}
				else if (color == "Red") {
					//Function to buy red sweater
				}
				else if (color == "Blue") {
					//Function to buy blue sweater
				}
				else if (color == "Black") {
					//Function to buy black sweater
				}
				else if (color == "Grey") {
					//Function to buy grey sweater
				}
				else if (color == "Orange") {
					//Function to buy Orange Sweater
				}
				else if (color == "Green") {
					//Function to nuy Green Sweater
				}
			}
			else {
				exit(0);
			}
		}
		else if (size == "L") {
			string decision;
			std::default_random_engine generator;
			std::uniform_int_distribution<int> distribution(1, 4);
			int inStock = distribution(generator);  // generates number in the range 1..6 

			if (inStock <= 3) {
				cout << "Great, we certainly can get a Large sweater for you. Now, Larges do come in 5 color: red, purple, blue, black, and gray. Which color would you like?: ";
				cin >> decision;

				decision[0] = toupper(decision[0]);
				string color = decision[0] + decision.substr(1, decision.length() - 1);

				if (color == "Purple") {
					//Function to byuy sweater
				}
				else if (color == "Red") {
					//Function to buy red sweater
				}
				else if (color == "Blue") {
					//Function to buy blue sweater
				}
				else if (color == "Black") {
					//Function to buy black sweater
				}
				else if (color == "Grey") {
					//Function to buy grey sweater
				}
			}
			else {
				exit(0);
			}
		}
		else if (size == "XL") {
			string decision;
			std::default_random_engine generator;
			std::uniform_int_distribution<int> distribution(1, 4);
			int inStock = distribution(generator);  // generates number in the range 1..6 

			if (inStock <= 3) {
				cout << "Great, we certainly can get a Medium sweater for you. Now, Extra Larges do come in 2 color: red, and purple. Which color would you like?: ";
				cin >> decision;

				decision[0] = toupper(decision[0]);
				string color = decision[0] + decision.substr(1, decision.length() - 1);

				if (color == "Purple") {
					//Function to byuy sweater
				}
				else if (color == "Red") {
					//Function to buy red sweater
				}
				else if (color == "Blue") {
					//Function to buy blue sweater
				}
				else if (color == "Black") {
					//Function to buy black sweater
				}
				else if (color == "Grey") {
					//Function to buy grey sweater
				}
			}
			else {
				exit(0);
			}
		}
	}
	else if (gender == "Women") {
		string decision;

		cout << "Now, do you want S, M, L, or XL";
		cin >> decision;

		decision[0] = toupper(decision[0]);
		string size = decision[0] + decision.substr(1, decision.length() - 1);

		if (size == "S") {
			string decision;
			std::default_random_engine generator;
			std::uniform_int_distribution<int> distribution(1, 4);
			int inStock = distribution(generator);  // generates number in the range 1..6 

			if (inStock <= 3) {
				cout << "Great, we certainly can get a small sweater for you. Now, smalls do come in 3 color: red, purple and blue. Which color would you like?: ";
				cin >> decision;

				decision[0] = toupper(decision[0]);
				string color = decision[0] + decision.substr(1, decision.length() - 1);

				if (color == "Purple") {
					//Function to byuy sweater
				}
				else if (color == "Red") {
					//Function to buy red sweater
				}
				else if (color == "Blue") {
					//Function to buy blue sweater
				}
			}
			else {
				exit(0);
			}
		}
		else if (size == "M") {
			string decision;
			std::default_random_engine generator;
			std::uniform_int_distribution<int> distribution(1, 4);
			int inStock = distribution(generator);  // generates number in the range 1..6 

			if (inStock <= 3) {
				cout << "Great, we certainly can get a Medium sweater for you. Now, Mediums do come in 7 color: red, purple, blue, black, gray, orange and green . Which color would you like?: ";
				cin >> decision;

				decision[0] = toupper(decision[0]);
				string color = decision[0] + decision.substr(1, decision.length() - 1);

				if (color == "Purple") {
					//Function to byuy sweater
				}
				else if (color == "Red") {
					//Function to buy red sweater
				}
				else if (color == "Blue") {
					//Function to buy blue sweater
				}
				else if (color == "Black") {
					//Function to buy black sweater
				}
				else if (color == "Grey") {
					//Function to buy grey sweater
				}
				else if (color == "Orange") {
					//Function to buy Orange Sweater
				}
				else if (color == "Green") {
					//Function to nuy Green Sweater
				}
			}
			else {
				exit(0);
			}
		}
		else if (size == "L") {
			string decision;
			std::default_random_engine generator;
			std::uniform_int_distribution<int> distribution(1, 4);
			int inStock = distribution(generator);  // generates number in the range 1..6 

			if (inStock <= 3) {
				cout << "Great, we certainly can get a Large sweater for you. Now, Larges do come in 5 color: red, purple, blue, black, and gray. Which color would you like?: ";
				cin >> decision;

				decision[0] = toupper(decision[0]);
				string color = decision[0] + decision.substr(1, decision.length() - 1);

				if (color == "Purple") {
					//Function to byuy sweater
				}
				else if (color == "Red") {
					//Function to buy red sweater
				}
				else if (color == "Blue") {
					//Function to buy blue sweater
				}
				else if (color == "Black") {
					//Function to buy black sweater
				}
				else if (color == "Grey") {
					//Function to buy grey sweater
				}
			}
			else {
				exit(0);
			}
		}
		else if (size == "XL") {
			string decision;
			std::default_random_engine generator;
			std::uniform_int_distribution<int> distribution(1, 4);
			int inStock = distribution(generator);  // generates number in the range 1..6 

			if (inStock <= 3) {
				cout << "Great, we certainly can get a Medium sweater for you. Now, Extra Larges do come in 2 color: red, and purple. Which color would you like?: ";
				cin >> decision;

				decision[0] = toupper(decision[0]);
				string color = decision[0] + decision.substr(1, decision.length() - 1);

				if (color == "Purple") {
					//Function to byuy sweater
				}
				else if (color == "Red") {
					//Function to buy red sweater
				}
				else if (color == "Blue") {
					//Function to buy blue sweater
				}
				else if (color == "Black") {
					//Function to buy black sweater
				}
				else if (color == "Grey") {
					//Function to buy grey sweater
				}
			}
			else {
				exit(0);
			}
		}
	}
}
