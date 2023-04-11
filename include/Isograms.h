#ifndef Isograms_H
#define Isograms_H

#include <string>
#include <iostream>

bool is_isogram(std::string str) {
	for (int count = 0; count < str.size(); count++) {
		for (int COUNT = count+1; COUNT < str.size(); COUNT++) {
			char temp2 = ' ';
			char temp = ' ';
			if (str[count] >= 'a' && str[count] <= 'z') {
					temp = str[count] - 32;
					temp2 = str[count];
				}
			else {
				temp = str[count] + 32;
				temp2 = str[count];
			}
			if (temp == str[COUNT])
				return false;
			if (temp2 == str[COUNT])
				return false;
			else continue;
		}
	}
	return true;
}

#endif // !Isograms_H
