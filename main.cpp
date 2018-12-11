// main.cpp
// Matthew Hanley
// COSC 2030
// Lab 8

#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

// Function that reads out contents of file.
// User inputs name of file to be read.
string readfile(string filename)
{
	string line;
	string output;
	ifstream file(filename);
	if (!file.eof())
	{
		while (getline(file, line))
		{
			return line;
		}
	}
}

// Function to write a string to a file.
// Input string is appended to existing data in the file.
void writefile(string filename, string input)
{
	ofstream file(filename, std::ios_base::app | std::ios_base::out);
	if (file.is_open())
	{
		file << input;
	}
}

int main()
{
	map<string, int> mymap;
	string buffer;
	int index = 0;
	buffer = readfile("example.txt");
	mymap.insert(buffer);


	system("pause");
	return 0;
}
