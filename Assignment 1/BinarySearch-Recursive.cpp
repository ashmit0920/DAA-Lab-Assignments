#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		if (arr[mid] == x)
			return mid;

		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		return binarySearch(arr, mid + 1, r, x);
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

