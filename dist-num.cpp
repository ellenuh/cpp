#include <iostream>
#include <algorithm>
using namespace std;

int distinct(int arr[], int n)
{
    sort(arr, arr + n);
    int res = 0;
    for (int i = 0; i < n; i++) {

        while (i < n - 1 && arr[i] == arr[i + 1])
            i++;
        res++;
    }
 
    return res;
}
int main()
{
	int arr[n]); //**
	int n = sizeof(arr) / sizeof(arr[0] //**

    
	int i;
	
	for (i=0; i<n; i++)
	cin >> arr[n];

    cout << distinct(arr, n);
    return 0;
}
