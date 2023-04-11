#include <string>

#pragma once

//https://www.codewars.com/kata/55908aad6620c066bc00002a/train/cpp

/*
Check to see if a string has the same amount of 'x's and 'o's. The method must return a boolean and be case insensitive. The string can contain any char.

Examples input/output:

XO("ooxx") => true
XO("xooxx") => false
XO("ooxXm") => true
XO("zpzpzpp") => true // when no 'x' and 'o' is present should return true
XO("zzoo") => false
*/

bool Exes_and_Ohs(std::string other) {
	int countX = 0;
	int countO = 0;
	for (int count = 0; count < other.size(); ++count) {
		if (other[count] == 'X' || other[count] == 'x')
			++countX;
		else if (other[count] == 'O' || other[count] == 'o')
			++countO;
		else continue;
	}
	return (countX == countO);
}