#include <iostream>
#include <string>
using namespace std;

string solution;
string myGuess1;
string myGuess2;
string myGuess3;
string myGuess4;

int main()
{
	cout << "Press enter to start game\n";
	solution = "1345";
	cout << "The solution : " + solution + "\n";
	cout << "Write your guess here: \n";
	getline(cin, myGuess1);
	getline(cin, myGuess2);
	getline(cin, myGuess3);
	getline(cin, myGuess4);
	string myGuess = myGuess1 + myGuess2 + myGuess3 + myGuess4;

	if (myGuess == solution)
		cout << "Your the best\n";
	else
		cout << "You suck \n";
}