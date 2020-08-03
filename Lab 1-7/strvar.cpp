//strvar.cpp

#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <cstring>
#include "strvar.h"

using namespace std;

namespace strvarken
{
	//Uses cstddef and cstdlib
	StringVar::StringVar(int size) : max_length(size)
	{
		value = new char[max_length + 1];
		value[0] = '\0';
	}

	//Uses cstddef and cstdlib
	StringVar::StringVar() : max_length(100)
	{
		value = new char[max_length + 1];
		value[0] = '\0';
	}

	// Uses cstring, cstddef and cstdlib
	StringVar::StringVar(const char a[]) : max_length(strlen(a))
	{
		value = new char[max_length + 1];

		for (int i = 0; i < strlen(a); i++)
		{
			value[i] = a[i];
		}
		value[strlen(a)] = '\0';
	}

	//Uses cstring, cstddef and cstdlib
	StringVar::StringVar(const StringVar& string_object) : max_length(string_object.length())
	{
		value = new char[max_length + 1];
		for (int i = 0; i < strlen(string_object.value); i++)
		{
			value[i] = string_object.value[i];
		}
		value[strlen(string_object.value)] = '\0';
	}

	StringVar::~StringVar()
	{
		delete[] value;
	}

	//Uses cstring
	int StringVar::length() const
	{
		return strlen(value);
	}

	//Uses iostream
	void StringVar::input_line(istream& ins)
	{
		ins.getline(value, max_length + 1);
	}

	//Uses iostream
	ostream& operator << (ostream& outs, const StringVar& the_string)
	{
		outs << the_string.value;
		return outs;
	}

	istream& operator >> (istream& ins, const StringVar& the_string)
	{
		ins >> the_string.value;
		return ins;
	}


	//add
	void StringVar::set_char(int i, char j)
	{
		value[i - 1] = j;
	}
	char StringVar::one_char(int i)
	{
		return value[i - 1];
	}
	bool operator ==(StringVar s1, StringVar s2)
	{
		int check = 0;
		for (int i = 0; i < s1.max_length; i++) {
			if (s1.value[i] == s2.value[i]) {
				check++;
			}
		}
		if (check == s1.max_length) {
			return true;
		}
		else {
			return false;
		}
	}

	string operator +(StringVar s1, StringVar s2) {

		string sum;

		for (int i = 0; i < s1.max_length; i++) {
			sum = sum + s1.value[i];
		}
		for (int i = 0; i < s2.max_length; i++) {
			sum = sum + s2.value[i];
		}

		return sum;
	}

	string StringVar::copy_piece(int i, int j) {
		string sum;

		for (int k = i - 1; k <= j - 1; k++) {
			sum = sum + value[k];
		}
		return sum;
	}



}//strvarken
