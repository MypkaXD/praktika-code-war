#ifndef Complementary_DNA_H
#define Complementary_DNA_H

#include <string>

std::string DNAStrand(const std::string& dna) {
	std::string dnaConver = dna;
	for (int count = 0; count < dnaConver.length(); count++) {
		switch (dna[count])
		{
			case('A') : dnaConver[count] = 'T'; break;
			case('T') : dnaConver[count] = 'A'; break;
			case('C') : dnaConver[count] = 'G'; break;
			case('G') : dnaConver[count] = 'C'; break;

			default:
				break;
		}
	}
	return dnaConver;
}

#endif // !Complementary_DNA_H
