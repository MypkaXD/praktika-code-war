#ifndef Abbreviate
#define Abbreviate

#include <string>

std::string abbrevName(std::string name)
{
	std::string abbrev;
	for (int count = 0; count < name.length(); count++) {
		if (count == 0) {
			if (name[count] >= 'a' && name[count] <= 'z')
				abbrev += name[count] - 32;
			else abbrev += name[count];
		}
		else {
			if (name[count] == ' ') {
				abbrev += '.';
				if (name[count+1] >= 'a' && name[count+1] <= 'z')
					abbrev += name[count + 1] - 32;
				else abbrev += name[count + 1];
			}
		}
	}
	return abbrev;
}

#endif // !Abbreviate_a_Two_Word_Name_H
