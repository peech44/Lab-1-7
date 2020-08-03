#pragma once
#ifndef STRVAR_H
#define STRVAR_H

#include <iostream>
using namespace std;
namespace strvarken
{
	class StringVar
	{
	public:
		StringVar(int size);
		//Constructor when size of string is specified.
		StringVar();
		//Constructor with default size of 100.
		StringVar(const char a[]);
		//Precondition: The array a contains characters and ‘\0′.
		//Constructor using array as values.
		StringVar(const StringVar& string_object);
		//Copy Constructor.
		~StringVar();
		//Destructor, returns memory to heap.
		int length() const;
		//Returns the length of the current string.
		void input_line(istream& ins);
		//Precondition: if ins is a file input stream attached to a file.
		//The next text up to ‘\n’, or the capacity of the stringvar is copied.

		friend ostream& operator <<(ostream& outs, const StringVar& the_string);
		//Precondition: if outs is a file it has been attached to a file.
		//Overloads the << operator to allow output to screen

		//add new function
		void set_char(int i, char j);

		char one_char(int i);

		friend bool operator ==(StringVar s1, StringVar s2);

		friend string operator +(StringVar s1, StringVar s2);

		string copy_piece(int, int);

		friend istream& operator >>(istream& ins, const StringVar& the_string);

	private:
		char* value; //pointer to dynamic array that holds the string value.
		int max_length; //declared maximum length of the string.
	};
}//strvarken



#endif // STRVAR_H

