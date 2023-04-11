#include <string>

#pragma once
/*
Given a string of digits, you should replace any digit below 5 with '0' 
and any digit 5 and above with '1'. Return the resulting string.

Note: input will never be an empty string
*/


std::string fakeBin(std::string str) {
	for (int count = 0; count < str.size(); ++count) {
		if (str[count] < (int)'5')
			str[count] = '0';
		else str[count] = '1';
	}
	return str;
}