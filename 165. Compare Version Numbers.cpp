﻿//Compare two version numbers version1 and version2.
//If version1 > version2 return 1, if version1 < version2 return -1, otherwise return 0.
//
//You may assume that the version strings are non - empty and contain only digits and the.character.
//The.character does not represent a decimal point and is used to separate number sequences.
//For instance, 2.5 is not "two and a half" or "half way to version three", it is the fifth second - level revision of the second first - level revision.
//
//Here is an example of version numbers ordering :
//
//0.1 < 1.1 < 1.2 < 13.37
//Credits :
//		Special thanks to @ts for adding this problem and creating all test cases.
//
//		Subscribe to see which companies asked this question



#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <numeric>
#include <stack>
#include <map>
#include <list>

using namespace std;

class Solution {
public:
	int compareVersion(string version1, string version2) {
		int i = 0, j = 0, n1 = version1.size(), n2 = version2.size(), num1 = 0, num2 = 0;
		while (i < n1 || j < n2)
		{
			while (i < n1 && version1[i] != '.')
				num1 = num1 * 10 + version1[i++] - '0';
			while (j < n2 && version2[j] != '.')
				num2 = num2 * 10 + version2[j++] - '0';
			if (num1 > num2)
				return 1;
			else if (num1 < num2)
				return -1;
			num1 = 0;
			num2 = 0;
			++i;
			++j;

		}
		return 0;


	}
};

void main()
{

}