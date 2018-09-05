// Even Fibonacci numbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>		
using namespace std;


int main() {
	int t;
	cin >> t;
	for (int a0 = 0; a0 < t; a0++) {
		long n;
		cin >> n;
		long sum = 2;
		long first = 1;
		long second = 2;
		long next = 0;
		for (int i = 3;i < n;i++)
		{
			if (sum < n)
			{
				next = first + second;
				first = second;
				second = next;
				//sum = sum + next;
				if (next % 2 == 0)
					sum = sum + next;
				if (sum > n)
				{
					sum = sum - next;
					cout << sum;
					break;
				}
			}
			else
			{
				cout << sum << endl;
				break;
			}
		}
	}
	getchar();
	
	return 0;
}