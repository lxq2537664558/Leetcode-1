﻿//A robot is located at the top - left corner of a m x n grid(marked 'Start' in the diagram below).
//
//The robot can only move either down or right at any point in time.The robot is trying to reach the bottom - right corner of the grid(marked 'Finish' in the diagram below).
//
//How many possible unique paths are there ?
//
//Above is a 3 x 7 grid.How many possible unique paths are there ?
//
//Note : m and n will be at most 100.
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <numeric>
using namespace std;

int uniquePaths(int m, int n) {
	vector<vector<int> > path(m, vector<int>(n, 1));
	for (int i = 1; i < m; i++)
		for (int j = 1; j < n; j++)
			path[i][j] = path[i - 1][j] + path[i][j - 1];
	return path[m - 1][n - 1];
}

void main()
{
	uniquePaths(3, 5);
}