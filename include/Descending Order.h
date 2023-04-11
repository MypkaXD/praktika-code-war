#ifndef Descending_Order_H
#define Descending_Order_H

#include <cinttypes>
#include <string>

uint64_t descendingOrder(uint64_t a) {

	std::string str = std::to_string(a);

	for (int count = 0; count < str.length() - 1; count++) {
		for (int COUNT = 0; COUNT < str.length() - count - 1; COUNT++) {
			if (str[COUNT] < str[COUNT+1]) {
				char temp = str[COUNT];
				str[COUNT] = str[COUNT+1];
				str[COUNT+1] = temp;
			}
		}
	}

	return std::stoull(str);//conver std::string to long long int
}

#endif // !Descending_Order_H
