
#ifndef CI_TEST_PERSON_HPP
#define CI_TEST_PERSON_HPP

#include <cctype>
#include <string>

#include "utility.hpp"

class person {

public:
    person(const std::string &name) : name_(name) {
        capitalize(name_);
    }

    std::string get_name() const {
        return name_;
    }

    void set_name(const std::string &name) {
        if (name.empty()) return;
        name_ = name;
        capitalize(name_);
    }

private:
    std::string name_;
};

#endif//CI_TEST_PERSON_HPP
