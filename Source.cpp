#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	/* import a text file
	Count the numbers of words in the file
	output the word count*/

	ifstream NewFile; // instance of class ifstream
	string foutput;    
	string word;
	string line;
	int wc = 0;
	int frequency = 0;
	string fword;
	cout << "Enter a word to find it's usage frequency" << endl;
	cin >> fword;
	NewFile.open("Text.txt"); //open text.txt file.
	if (!NewFile.is_open()) //is_open is function that determines whether a file is open.
	{
		cerr << "File not found.\n"; // err message output.
		return 1; //program closes with an error
	}

	while (!NewFile.eof()) // .eof() function with bool values that determines if file is over
	{
		getline(NewFile, word, ' ');
		//cout << word << endl;
		wc++;
		if (word.compare(fword) == 0)
		{
			frequency++;
		}
	}

	cout << "Number of words "<< wc << endl;
	cout << "Usage frequency of " << fword << " "<< frequency << endl;

	NewFile.close(); // always close file after opening.

	return 0; // program ends successfully.
}
	
	
	
