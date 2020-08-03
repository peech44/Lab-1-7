// Lab 1-7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "strvar.h"

using namespace std;
using namespace strvarken;

void conversation(int max_name_size);
//Continues converstation with user

int main()
{
    std::cout << "Hello World!\n";
    conversation(30);
    cout << "End of Demo.\n";

    return 0;
}

//Demo function
void conversation(int max_name_size)
{
	
	

	StringVar your_name(max_name_size), our_name("Borg");
	StringVar sum_name(100);

	cout << "What is your name?\n";
	//your_name.input_line(cin);
	cin >> your_name;
	cout << "We are " << our_name << endl;
	cout << "We will meet again " << your_name << endl;

	cout << "that one_char is " << our_name.one_char(2) << endl;
	our_name.set_char(2, 'a');
	cout << "set_char is " << our_name << endl;
	cout << "copy_piece " << our_name.copy_piece(1, 2) << endl;
	cout << "We are " << our_name << endl;
	if (your_name == our_name) {
		cout << "that's SAME" << endl;
	}
	else {
		cout << "DIFFERENT" << endl;
	}
	cout << "here we are : " << your_name + our_name << endl;




}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
