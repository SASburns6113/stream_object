#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	// Create an object from a class
	// Create a file object from the 
	// file stream class
	ofstream myFile;
	// We must open the file and 
	// give it a file name, but the mode
	// params are optional
	cout << "About to crate or open the file superFile.txt" << endl;
	system("pause");
	myFile.open("superFile.txt", ios::out | ios::app);
	// Actually write text to the file here!
	myFile << "This is my first file text.\n";
	myFile << "The first of many.\n";
	cout << "about to write to the file superFile.txt" << endl;
	// Let's take a break!
	system("pause");
	// Important! close the file here!
	myFile.close();
	cout << "about to close the file superFile.txt" << endl;
	
	//********************* Read from file here! ****************//
	cout << "About to Read and display the file superFile.txt" << endl;
	// Let's take a pause
	system("pause");
	
	// Let's the code pause
	system("pause");
	// Exit Main function 
	return 0;
}

