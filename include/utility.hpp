
#ifndef CI_TEST_UTILITY_HPP
#define CI_TEST_UTILITY_HPP

#include <cctype>
#include <string>

void capitalize(std::string& str) {
    str[0] = std::toupper(str[0]);
    for (int i = 1; i < str.size(); i++) {
        str[i] = std::tolower(str[i]);
    }
}

#endif//CI_TEST_UTILITY_HPP
