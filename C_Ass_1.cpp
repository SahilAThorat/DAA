/*Implement Coin Change problem.
Statement Given an integer array of coins[ ] of
size N representing different types of currency and an
integer sum, The task is to find the number of ways to
make sum by using different combinations
from coins[].
Note: Assume that you have an infinite supply of each
type of coin.
Input: sum = 4, coins[] = {1,2,3}, Output: 4
Input: sum = 10, coins[] = {2, 5, 3, 6} Output: 5
*/
#include <bits/stdc++.h>
using namespace std;


long NumWays(long N, vector<long> Coins)
{
	vector<long> ways(N + 1);
    ways[0] = 1;

	for(int i = 0; i < Coins.size(); i++)
	{
		for(int j = 0; j < ways.size(); j++)
		{
			if (Coins[i] <= j)
			{
				ways[j] += ways[(j - Coins[i])];
			}
		}
	}
	return ways[N];
}

void printArray(vector<long> coins)
{
	for(long i : coins)
		cout << i << "\n";
}


int main()
{
	vector<long> Coins = { 1, 5, 10 };
	
	cout << "The Coins Array:" << endl;
	printArray(Coins);
	
	cout << "Number of ways are :" << endl;
	cout << NumWays(12, Coins) << endl;
}


