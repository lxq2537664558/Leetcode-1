//Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.
//
//Do not allocate extra space for another array, you must do this in place with constant memory.
//
//For example,
//Given input array nums = [1, 1, 2],
//
//Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively.It doesn't matter what you leave beyond the new length.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int removeDuplicates(vector<int>& nums) {
	if (nums.size() == 0)
		return 0;
	int count = 1;
	for (int i = 1; i < nums.size(); ++i)
	{
		if (nums[i] != nums[i - 1]) 
		{
			nums[count++] = nums[i];
		}
	}
	return count+1;
}

void main()
{
	vector<int> test;
	test.push_back(1);
	test.push_back(1);
	test.push_back(2);
	removeDuplicates(test);
}