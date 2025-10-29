#pragma once
#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

using namespace std;

string toLowerCase(string str) {
	transform(str.begin(), str.end(), str.begin(),
		[](unsigned char c) { return tolower(c); });

	return str;
}