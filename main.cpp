// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

char nonRepeat(string line);

int main()
{
	string s;
	s = "abdabdcda";
	cout << "String: " << s << endl;
	cout << nonRepeat(s) << endl;
	system("pause"); 
    return 0;
}

char nonRepeat(string line) {
	sort(line.begin(), line.end());
	cout << "Sorted: " << line << endl;
	int index = 0;
	for (int i = 0; i < line.length(); i++) {
		if (line[i] != line[i + 1]) {
			return line[i];
		}
		else {
			while (line[i] == line[i + 1])
				i++;
		}
	} 
	cout << "No char used, once returning: ";
	return 'F';
}