/*
	Jay Montoya
	CS 151 with Porto, Th 5:30-9:20
	Chapter 12 Project 1

	Write a program that accepts a cstring as an argument and returns the number of words
	contained in the cstring. For example, "Four score and seven years ago" would return 6
	words to the user.

	ALGORITHM:
	1) PROMPT user to enter a sentence
	2) CREATE a cstring to hold this result
	3) fill the cstring with the user input
	4) CREATE a pointer which will point to the
		split cstring tokens
	5) use strtok to perform the above
	6) loop through the result 'pch' and count
		the number of tokens found. store in an int.
	7) OUTPUT the results to the user.

*/
#include <iostream>
#include <cstring>
using namespace std;

int main() {

	//prompt user
	cout << "\nEnter a sentence: ";

	// set a max sentence lenght
	const int SENTENCE_LENGTH = 150;

	// create the cstring
	char sentence[SENTENCE_LENGTH];


	// fill the cstring with the user input
	cin.getline(sentence,SENTENCE_LENGTH);

	// create a pointer to point to our solution
	char * pch;

	// split the cstring into tokens delimited by
	// the space base
	cout << "Splitting into tokens...\n" << endl;
	pch = strtok(sentence, " ");

	// create variable to count the tokens
	int numWords = 0;

	// loop through the tokens counting each one
	while(pch != NULL) {
		numWords++;
		pch = strtok(NULL, " ");

	}

	// output solution to the user.
	cout << "This sentence has " << numWords << " words.." << endl;

}