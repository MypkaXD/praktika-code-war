#include <iostream>
#include <string>

#pragma once

int randbetween(const int low, const int high) {
	int randtemp = rand();
	if (randtemp >= low && randtemp <= high)
		return randtemp;
	else randbetween(low, high);
}

std::string bankdetailgenerate() {
	std::string temp = "";

	int quarter = 0;

	for (int count = 0; count < 4; ++count) {
		quarter = randbetween(1000, 9999);
		temp += std::to_string(quarter);
	}
	return temp;
}