// Countdown.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
char vowels[]{ "aeiou" };
char consonants[]{ "bcdfghjklmnpqrstvwqyz" };
char allLetters[8];
char rConsonant, rVowel;


char cons(int constrandom) 
{
	rConsonant = consonants[constrandom];
	//lettergatherer(rConsonant);
	return rConsonant;
}
char vow(int vowrandom) 
{
	rVowel = vowels[vowrandom];
	//lettergatherer(rVowel);
	return rVowel;
}



int main()
{
	
	bool done = false;
	char userinput;
	srand(time(NULL));

	//ask user for vowel (v) or constant (c)

	cout << "Please enter v for a vowel or c for a consonant (Press x to exit)" << endl;
	
	while (!done) {

	for (int i = 0; i <= 8; i++) {
		int vrandom = rand() % 4;
		int crandom = rand() % 20;

		cin >> userinput;

			switch (userinput)
			{
			case 'v':
				//cout << "vrandom = " << vrandom << endl; //bugcheck
				cout << vow(vrandom) << endl; //working
				allLetters[i] = rVowel;
				break;
			case 'c':
				//cout << "crandom = " << crandom << endl; //bugcheck
				cout << cons(crandom) << endl;
				allLetters[i] = rConsonant;
				break;
			case'x':
				exit(1);
			default:
				cout << "please enter v for vowel or c for a consonant" << endl;
				done = false;
			}
			if (i == 7) 
			{ 
				cout << "final letter" <<endl; 
			}
			
		}
	done = true;
	}
	cout << "Your final letters altogether are: " << endl;
	//Programme has ran the for loop 8 times now gather all letters from the array and print them to the output with ANOTHER for loop
	for (int all = 0; all <= 8; all++) {
		cout << allLetters[all];
	}
	cout << endl;
	system("PAUSE");
    return 0;
}

