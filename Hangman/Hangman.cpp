#include <iostream>
#include <string>
#include "Hangman.h"

using namespace std;

//what happens when the wrong letter is guessed
void incorrect_guesses(vector<char> wrong, string answer)
{
	cout << "\nIncorrect Letters Guessed: " << endl;

	for (int i = 0; i<wrong.size(); i++)
	{
		cout << wrong[i] << endl;
	}

	cout << "\nSecret Word:" << endl;

	for (int i = 0; i < answer.length(); i++)
	{
		cout << answer[i];
	}
}
//message that will be displayed when the game ends

void end(string answer, string secret_word)
{
	if (answer == secret_word)
	{
		cout << "Congrats! You won!" << endl;
	}
	else
	{
		cout << "You failed at guessing the word!" << endl;
		cout << "The secret word was: " << secret_word;
	}
}