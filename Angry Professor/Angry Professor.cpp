// Angry Professor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t, count;
	cin >> t;
	for (int a0 = 0; a0 < t; a0++) {
		int n;
		int k;
		cin >> n >> k;
		vector<int> a(n);
		count = 0;
		for (int a_i = 0; a_i < n; a_i++) {
			cin >> a[a_i];
			if (a[a_i] <= 0) count++;
		}
		if (count >= k) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
    return 0;
}

