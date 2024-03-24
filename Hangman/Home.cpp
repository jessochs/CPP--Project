#include <iostream>
#include <vector>
#include "Hangman.h"


using namespace std;

int main()
{
	cout << "****** Hangman Game ******" << endl;
	cout << "**************************" << endl;
	cout << "Try to guess the word before your tries run out!" << endl;

	string secret_word = "grilledcheese";

	string answer = "_____________";
	int misses = 0;
	vector<char> wrong;
	bool guess = false;
	char letter;

	while (answer != secret_word && misses < 5)
	{
		incorrect_guesses(wrong, answer);

		cout << "\nPlease enter a letter";
		cin >> letter;

		for (int i = 0; i < secret_word.length(); i++)
		{
			if (letter == secret_word[i])
			{
				answer[i] = letter;
				guess = true;
			}
		}
		if (guess)
		{
			cout << "\nYou've guessed correctly!" << endl;

		}
		else
		{
			cout << "\nIncorrect. One life has been lost" << endl;
			wrong.push_back(letter);
			misses++;
		}
		guess = false;

	}

	end(answer, secret_word);

	return 0;
}