#ifndef Vowel_Count_H
#define Vowel_Count_H

#include <string>

int getCount(const std::string& inputString) {
	int num_vowels{ 0 };

	for (int count = 0; count < inputString.length(); count++) {
		switch (inputString[count])
		{
			case('a'): num_vowels++; break;
			case('e'): num_vowels++; break;
			case('i'): num_vowels++; break;
			case('o'): num_vowels++; break;
			case('u'): num_vowels++; break;

			default:
				break;
			}
	}

	return num_vowels;
}

#endif // !Vowel_Count_H
