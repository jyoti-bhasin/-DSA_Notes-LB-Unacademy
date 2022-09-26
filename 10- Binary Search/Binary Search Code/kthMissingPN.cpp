#include<bits/stdc++.h>
using namespace std;

bool search(vector<int> v, int k)
{
	int s = 0;
	int e = v.size() - 1;
	while (s <= e)
	{
		int mid = s + (e - s) / 2;
		if (v[mid] == k)
		{
			return true;
		}
		if (v[mid] > k)
		{
			e = mid - 1;
		}
		else
		{
			s = mid + 1;
		}
	}
	return false;
}

int findKthPositive(vector<int> &arr, int k)
{
	long long sum = 0;

	for (auto i : arr)
	{
		sum += i;
	}
	if (sum < k)
	{
		return 0;
	}
	if (arr.size() == 1)
		return 1;
	int cnt = 1;
	for (int i = 1; i <= sum; i++)
	{

		if (!search(arr, i) && cnt == k)
		{
			return i;
		}
		else if (!search(arr, i) && cnt < k)
		{
			cnt++;
		}
	}
	return 0;
}
