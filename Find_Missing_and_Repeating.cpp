//You must not modify the array (assume the array is read only).
//You must use only constant, O(1) extra space.
//Your runtime complexity should be less than O(n2).
//There is only one duplicate number in the array, but it could be repeated more than once.
//https://leetcode.com/problems/missing-number/solution/
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

// Function to find the missing number and duplicate element
// using XOR operator in an array of size n and range of
// elements between [1 to n]
pair<int, int> findMissingAndDuplicate(int arr[], int n)
{
	// take XOR of all array elements from index [0 to n-1]
	// and all numbers in range [1 to n]
	int res = n;
	for (int i = 0; i < n; i++)
		res = res ^ arr[i] ^ i;

	// x, y stores the duplicate element and missing number
	int x = 0, y = 0;

	// res stores (x ^ y)

	// find position of the rightmost set bit in res
	int k = log2(res & -res);

	// split the array into two sub-arrays
	for (int i = 0; i < n; i++)
	{
		// array elements that have k'th bit 1
		if (arr[i] & (1 << k))
			x = x ^ arr[i];

		// array elements that have k'th bit 0
		else
			y = y ^ arr[i];
	}

	// split the range [1-n] into two sub-range
	for (int i = 1; i <= n; i++)
	{
		// number i have k'th bit 1
		if (i & (1 << k))
			x = x ^ i;

		// number i have k'th bit 0
		else
			y = y ^ i;
	}

	return make_pair(x, y);
}

// Find missing number and duplicate elements in a limited range array
int main()
{    int n;
     cin >>n;
     int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
	pair<int, int> p = findMissingAndDuplicate(arr, n);

	// linear search for missing element
	if (find(arr, arr + n, p.first) == arr + n)
		swap(p.first, p.second);

	cout << "Duplicate and missing elements are "
			<< p.first << " and " << p.second;

	return 0;
}
