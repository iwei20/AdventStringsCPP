#include "string_manip.hpp"
#include <cstdarg>

std::size_t count(const std::string& s, char c) {
    std::size_t result = 0;
    for (char ch : s) {
        if (c == ch) ++result;
    }
    return result;
}

std::string wrap_sscanf(const std::string& s, ... ) {
    std::string result;
    va_list args;
    vsscanf(result.c_str(), s.c_str(), args);
    return result;
}

std::string slice(const std::string& s, const std::size_t start = 0, const std::size_t stop = -1, const std::size_t step = 1) {

    std::string result = "";

    std::size_t real_start = start % s.size();
    std::size_t real_stop = stop % (s.size() + 1);

    if (real_stop > real_start) {
        for (std::size_t i = real_start; real_start <= i && i < real_stop; i += step) {
            result += s[i];
        }
    } else {
        for (std::size_t i = real_start; real_start >= i && i > real_stop; i += step) {
            result += s[i];
        }
    }
}