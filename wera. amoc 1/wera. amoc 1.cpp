#include <iostream>
#include<string>
#include"Fraction.h"
using namespace std;
int main()
{
	Fraction t;
	for (int i = 0; i < 2; i++) {
		cin >> t.mricx >> t.mnish;
	}
	t.Addition();
	t.Subtraction();
	t.Multiplication();
	t.Division();
}

