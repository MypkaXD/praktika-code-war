#ifndef CHECH_H
#define CHECH_H

#include <vector>
#include <string>

bool check(const std::vector<std::string>& seq, const std::string& elem) {
    for (int count = 0; count < seq.size(); count++) {
        if (elem == seq[count])
            return true;
    }
    return false;
}

#endif // !CHECH_H
