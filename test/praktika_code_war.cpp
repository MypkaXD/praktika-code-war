#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include "conver_string_to_int.h"
#include "Convert boolean values to strings 'Yes' or 'No'.h"
#include "Descending Order.h"
#include "Vowel Count.h"
#include "Complementary DNA.h"
#include "You only need one - Beginner.h"
#include "Isograms.h"
#include "add_binary.h"
#include "Abbreviate a Two Word Name.h"	
#include "Affine_Cipher.h"
#include "Exes_and_Ohs.h"
#include "String_repeat.h"
#include "Fake_Binary.h"
#include "Cat_years_Dog_years.h"
#include "Is a number prime.h"
#include "Count characters in your string.h"


int main() {

	std::map<char, unsigned> temp = count("aabb");
	std::map <char, unsigned> ::iterator it = temp.begin();
	for (int count = 0; count < temp.size(); ++it, ++count) {
		std::cout << it->first << " " << it->second << std::endl;
	}

	return 0;
}


/*
int main() {

	using V = std::vector<int>;

	Describe(HumanYearsCatYearsDogYears) {
	  It(BasicTests) {
		Assert::That(humanYearsCatYearsDogYears( 1), Equals(V{1, 15, 15}));
		Assert::That(humanYearsCatYearsDogYears( 2), Equals(V{2, 24, 24}));
		Assert::That(humanYearsCatYearsDogYears(10), Equals(V{10, 56, 64}));
	  }
	};

	std::cout << humanYearsCatYearsDogYears(1)[0] << humanYearsCatYearsDogYears(1)[1] << humanYearsCatYearsDogYears(1)[2] << std::endl;
	std::cout << humanYearsCatYearsDogYears(2)[0] << humanYearsCatYearsDogYears(2)[1] << humanYearsCatYearsDogYears(2)[2] << std::endl;
	std::cout << humanYearsCatYearsDogYears(10)[0] << humanYearsCatYearsDogYears(10)[1] << humanYearsCatYearsDogYears(10)[2] << std::endl;

	return 0;
}
*/

/*
int main() {
	std::cout << fakeBin("45385593107843568");
	return 0;
}
*/

/*
int main() {

	std::cout << repeat_str(10, "I");

	return 0;
}
*/

/*
int main() {
	std::string name = "oooXXX";
	if (Exes_and_Ohs(name))
		std::cout << "GOOD";
	else std::cout << "BAD";
}
*/

/*
int main() {
	std::cout << affine_encrypt("{Good morning!}", 7, 9,26) << std::endl;
}
*/

/*
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
*/

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