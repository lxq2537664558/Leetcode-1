//The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)
//
//P   A   H   N
//A P L S I I G
//Y   I   R
//And then read line by line : "PAHNAPLSIIGYIR"
//Write the code that will take a string and make this conversion given a number of rows :
//
//string convert(string text, int nRows);
//convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR".

#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <string>
using namespace std;

string convert(string s, int nRows)
{

	if (nRows <= 1)
		return s;

	const int len = (int)s.length();
	string *str = new string[nRows];

	int row = 0, step = 1;
	for (int i = 0; i < len; ++i)
	{
		str[row].push_back(s[i]);

		if (row == 0)
			step = 1;
		else if (row == nRows - 1)
			step = -1;

		row += step;
	}

	s.clear();
	for (int j = 0; j < nRows; ++j)
	{
		s.append(str[j]);
	}

	delete[] str;
	return s;
}

void main()
{
	cout<<convert("PAYPALISHIRING", 3);
}

