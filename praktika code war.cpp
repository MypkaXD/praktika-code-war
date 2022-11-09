#include <iostream>
#include <string>
#include <vector>
//#include <algorithm>

#include "conver_string_to_int.h"
#include "Convert boolean values to strings 'Yes' or 'No'.h"
#include "Descending Order.h"
#include "Vowel Count.h"
#include "Complementary DNA.h"
#include "You only need one - Beginner.h"
#include "Isograms.h"
#include "add_binary.h"
#include "Abbreviate a Two Word Name.h"	

int square_digits(int num) {
	std::string result;
	result = std::to_string(num);
	int count = 0;
	std::string res;
	while (num > 0) {
		result[count] = (std::to_string((num % 10)* (num % 10)));
		num = num / 10;
		count++;
	}
	return std::stoi(result);
}

int main() {
	std::cout << square_digits(3212);
	return 0;
}

/*
int main() {

	std::string name = "Sam Harris";
	std::cout << abbrevName(name);

	return 0;
}
*/

/*
int main() {
	std::cout << add_binary(1, 1);
	return 0;
}
*/

/*
int main() {
	std::string temp1 = "moose";
	if (is_isogram(temp1))
		std::cout << "TRUE";
	else std::cout << "FALSE";

	return 0;
}
*/

/*
int main() {
	std::vector<std::string> seq = { "a","b", "C" };
	std::string elem = "C";
	std::string elem2 = "A";

	if (check(seq, elem))
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;

	if (check(seq, elem2))
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
	return 0;
}
*/

/*
int main() {
	std::cout << DNAStrand("AAAA");
	std::cout << DNAStrand("ATTGC");
	std::cout << DNAStrand("GTAT");
	return 0;
}
*/

/*
int main() {
	std::cout << getCount("abracadabra");
	return 0;
}
*/

/*
int main() {
	std::cout << descendingOrder(123456789);
	return 0;
}
*/

/*
int main() {
	bool b1 = true;
	bool b2 = false;

	std::cout << bool_to_word(b1) << "\n" << bool_to_word(b2);

	return 0;
}
*/

/*
int main() {
	std::string s1 = "123456";
	std::cout << string_to_number(s1);

	return 0;
}
*/