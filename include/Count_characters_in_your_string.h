<<<<<<< HEAD
#include <map>
#include <string>


#pragma once

/*
The main idea is to count all the occurring characters in a string. If you have a string like aba, then the result should be {'a': 2, 'b': 1}.

What if the string is empty? Then the result should be empty object literal, {}.

*/

std::map<char, unsigned> count(const std::string& string) {
    std::map<char, unsigned> temp;
    if (string.size() == 0)
        return temp;
    else {
        temp.insert({ string[0], 1 });
        for (int count = 1; count < string.size(); ++count) {
            std::map<char, unsigned>::iterator it = temp.begin();
            bool find = false;
            for (it; it != temp.end(); ++it) {
                if (it->first == string[count]) {
                    it->second += 1;
                    find = true;
                    break;
                }
            }
            if (!find)
                temp.insert({ string[count],1 });
        }
    }
    return temp;
=======
#include <map>
#include <string>


#pragma once

/*
The main idea is to count all the occurring characters in a string. If you have a string like aba, then the result should be {'a': 2, 'b': 1}.

What if the string is empty? Then the result should be empty object literal, {}.

*/

std::map<char, unsigned> count(const std::string& string) {
    std::map<char, unsigned> temp;
    if (string.size() == 0)
        return temp;
    else {
        temp.insert({ string[0], 1 });
        for (int count = 1; count < string.size(); ++count) {
            std::map<char, unsigned>::iterator it = temp.begin();
            bool find = false;
            for (it; it != temp.end(); ++it) {
                if (it->first == string[count]) {
                    it->second += 1;
                    find = true;
                    break;
                }
            }
            if (!find)
                temp.insert({ string[count],1 });
        }
    }
    return temp;
>>>>>>> 808594297b29c604c5b95f4a7ef9e64a22a2c3e7
}