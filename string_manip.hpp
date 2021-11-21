#pragma once
#include <string>
#include <vector>

namespace manip { 
    /**
     * @brief Counts the number of occurrences of a character in a string.
     * 
     * @param s The string to look for occurrences of the character
     * @param c The character of which to count occurrences of
     * @return std::size_t 
     */
    std::size_t count(const std::string& s, char c);
    std::size_t count(const std::string& s, const std::string& substr);

    int hash_str(const std::string& s);
    std::vector<int> hash_all_substr(const std::string& s, std::size_t n);

    void replace_inplace(
        std::string& s, 
        const std::string& old_str, 
        const std::string& new_str
    );
    std::string replace(
        const std::string& s, 
        const std::string& old_str, 
        const std::string& new_str
    );

    std::vector<std::string> split(const std::string& s, char c);
    std::vector<std::string> split(const std::string& s, const std::string& delimiter);

    std::vector<std::tuple<std::size_t, char>> enumerate(const std::string& s);

    void strip_inplace(std::string& s);
    std::string strip(const std::string& s);
    void lstrip_inplace(std::string& s);
    std::string lstrip(const std::string& s);
    void rstrip_inplace(std::string& s);
    std::string rstrip(const std::string& s);

    bool islower(char c);
    bool islower(const std::string& s);
    bool isupper(char c);
    bool isupper(const std::string& s);
    bool isdigit(char c);
    bool isdigit(const std::string& s);
    bool isalpha(char c);
    bool isalpha(const std::string& s);

    void toupper_inplace(std::string& s);
    std::string toupper(const std::string& s);
    void tolower_inplace(std::string& s);
    std::string tolower(const std::string& s);

    void lpad_inplace(std::string& s, char c, const std::size_t n);
    std::string lpad(const std::string& s, char c, const std::size_t n);
    void rpad_inplace(std::string& s, char c, const std::size_t n);
    std::string rpad(const std::string& s, char c, const std::size_t n);

    std::string new_sscanf(const std::string& s, ... );
    std::string slice(const std::string& s, const std::size_t start = 0, const std::size_t stop = -1, const std::size_t step = 1);
}