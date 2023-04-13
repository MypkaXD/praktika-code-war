#include <string>

#pragma once

/*
The rgb function is incomplete. Complete it so that passing in RGB decimal values will result in a 
hexadecimal representation being returned. Valid decimal values for RGB are 0 - 255. Any values that fall 
out of that range must be rounded to the closest valid value.

Note: Your answer should always be 6 characters long, the shorthand with 3 will not work here.

The following are examples of expected output values:

rgb(255, 255, 255) # returns FFFFFF
rgb(255, 255, 300) # returns FFFFFF
rgb(0,0,0) # returns 000000
rgb(148, 0, 211) # returns 9400D3

*/

std::string getHex(int value) {
	int tempmod = 0;
	std::string temp = "";
	for (int count = 0; count < 2; ++count) {
		if (value == 0) {
			temp += '0';
			continue;
		}
		tempmod = value % 16;
		value = value / 16;
		if (tempmod < 10)
			temp += std::to_string(tempmod);
		else if (tempmod >= 10)
			temp += 55 + tempmod;
	}
	return temp;
}

std::string replaceLet(std::string string) {
	char temp1 = string.front();
	char temp2 = string.back();

	std::string temp = "";
	temp += temp2;
	temp += temp1;
	
	return temp;
}

class RGBToHex
{
public:
	static std::string rgb(int r, int g, int b) {
		// 65-70 = A-F

		if (r < 0) r = 0;
		else if (r > 255) r = 255;
		if (g < 0) g = 0;
		else if (g > 255) g = 255;
		if (b < 0) b = 0;
		else if (b > 255) b = 255;
		
		std::string temp1 = replaceLet((getHex(r)));
		std::string temp2 = replaceLet((getHex(g)));
		std::string temp3 = replaceLet((getHex(b)));

		return temp1+temp2+temp3;
	}
};
