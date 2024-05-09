#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
	while (l <= r) {
		int m = l + (r - l) / 2;

		if (arr[m] == x)
			return m;

		if (arr[m] < x)
			l = m + 1;

		else
			r = m - 1;
	}

	return -1;
}

int main()
{
	int arr[] = {2, 5, 9, 15, 46, 74, 85, 91, 127};
	int x = 91;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, x);
	if (result == -1)
        cout << "Element is not present in array";
    else
        cout << "Element is present at index " << result;

	return 0;
}