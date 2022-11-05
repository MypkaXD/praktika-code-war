#ifndef ADD_BINARY_H
#define ADD_BINARY_H

#include <cstdint>
#include <string>

std::string add_binary(uint64_t a, uint64_t b) {
    uint64_t sum = a + b;
    std::string result;
    if (sum == 0)
        return "0";
    for (uint64_t count = sum; count > 0; count = count / 2 )
        result.append(std::to_string(count % 2));
    std::string temp;
    temp.resize(result.length());
    for (int count = 0; count < result.length(); count++)
        temp[count] = result[result.length() - 1 - count];
    return temp;
}

#endif // !ADD_BINARY_H
