#include "string_manip.hpp"
#include <cstdarg>
#include <iostream>
#include <vector>

std::size_t manip::count(const std::string& s, char c) {
    std::size_t result = 0;
    for (char ch : s) {
        if (c == ch) ++result;
    }
    return result;
}

std::string manip::slice(
        const std::string& s, 
        const std::optional<int>& start, 
        const std::optional<int>& stop, 
        const std::optional<int>& step) {

    // Implementation taken from CPython
    int length = s.size();
    int m_start, m_stop; 

    int m_step = step.value_or(1);
    if (m_step == 0) std::cerr << "Step cannot be 0\n";
    
    if (!start.has_value()) {
        m_start = m_step > 0 ? 0 : length - 1;
    } else {
        m_start = start.value();
        if (m_start < 0) m_start += length;
        if (m_start < 0) m_start = (m_step < 0) ? -1 : 0;
        if (m_start >= length) m_start = (m_step < 0) ? length - 1: length;
    }

    if (!stop.has_value()) {
        m_stop = m_step > 0 ? length : -1;
    } else {
        m_stop = stop.value();
        if (m_stop < 0) m_stop += length;
        if (m_stop < 0) m_stop = (m_step < 0) ? -1 : 0;
        if (m_stop >= length) m_stop = (m_stop < 0) ? length - 1: length;
    }

    int slicelength;
    if ((m_step < 0 && m_stop >= m_start) || 
        (m_step > 0 && m_stop <= m_start)) {
        slicelength = 0;
    } else if (m_step < 0) {
        slicelength = (m_stop - m_start + 1) / (m_step) + 1;
    } else {
        slicelength = (m_stop - m_start - 1) / (m_step) + 1;
    }

    if (slicelength <= 0) {
        return "";
    }
    
    if (m_step == 1) {
        return s.substr(m_start, m_stop - m_start);
    } 

    std::string result;
    result.resize(slicelength);
    for (std::size_t pos = m_start, i = 0; i < slicelength; pos += m_step, ++i) {
        result[i] = s[pos];
    }
    return result;
}