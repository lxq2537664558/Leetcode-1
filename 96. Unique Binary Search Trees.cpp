﻿//Given n, how many structurally unique BST's (binary search trees) that store values 1...n?
//
//For example,
//Given n = 3, there are a total of 5 unique BST's.
//
//1         3     3      2      1
//\ / / / \      \
//3     2     1      1   3      2
/// / \                 \
//2     1         2                 3
//Subscribe to see which companies asked this question

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <numeric>
#include <stack>
#include <map>

using namespace std;




class Solution {
public:
	int numTrees(int n) {
		vector<int> G(n + 1, 0);
		G[0] = G[1] = 1;
		for (int i = 2; i <= n; ++i)
			for (int j = 1; j <= i; ++j)
				G[i] += G[j - 1] * G[i - j];
		return G[n];


	}
};

void main()
{
	cout << numTrees(2);
}