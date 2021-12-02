#include <bits/stdc++.h>
#include "advent_utils.hpp"

using namespace std;

void print_test_count_char() {
    cout << smanip::count("Hello", 'c') << "\n";
    cout << smanip::count("Hello", 'h') << "\n";
    cout << smanip::count("Hello", 'o') << "\n";
}

void print_test_slice() {
    cout << smanip::slice("Hello", 1, nullopt, 2) << "\n"; // el
    cout << smanip::slice("Hello", 1, nullopt, nullopt) << "\n"; // ello
    cout << smanip::slice("Hello", nullopt, nullopt, nullopt) << "\n"; // Hello
    cout << smanip::slice("Hello", nullopt, nullopt, -1) << "\n"; // olleH
    cout << smanip::slice("Hello", -3, nullopt, nullopt) << "\n"; // llo
    cout << smanip::slice("Hello", nullopt, -1, nullopt) << "\n"; // Hell
    cout << smanip::slice("Hello", -3, 0, -1) << "\n"; // le
    cout << smanip::slice("Hello", -3, nullopt, -1) << "\n"; // leH
    cout << smanip::slice("Hello", -4, -3, -1) << "\n"; // [Empty]
    cout << smanip::slice("Hello", nullopt, -4, -3) << "\n"; // o
}

void print_test_hash_single() {
    cout << smanip::hash_str("OKOKOKOK") << "\n";
    long long result_single = (((256LL * 'O' + 'K') * 256LL * 256LL * 256LL * 256LL * 256LL * 256LL + (256LL * 'O' + 'K') * 256LL * 256LL * 256LL * 256LL + (256LL * 'O' + 'K') * 256LL * 256LL + (256LL * 'O' + 'K')) % (long long) (1e9 + 9)); 
    cout << result_single << "\n"; 
    
    long long result = 0;
    string s = "OKOKOKOK";
    for (char c : s) {
        result *= 256;
        result %= (long long)1e9 + 9;
        result += (long long)c;
    }
    cout << result << "\n";
}

void print_test_vector_out() {
    vector<int> test5 = {1, 2, 3, 4, 5};
    vector<int> test1 = {1};
    vector<int> test0 = {};
    vector<double> testd = {1.1, 5.4, 329309};

    cout << test5 << "\n";
    cout << test1 << "\n";
    cout << test0 << "\n";
    cout << testd << "\n";
}

void print_test_hash_rolling() {
    cout << smanip::hash_rolling("OKOKOKOK") << "\n";
}

void print_test_vector_in_single() {
    vector<string> stuff;
    vector<int> numbers;
    cin > stuff > stuff > numbers > stuff;
    cout << stuff << "\n";
    cout << numbers << "\n";
}

void print_test_vector_in() {
    vector<string> numbers;
    cin >> numbers;
    numbers[2].push_back('e');
    cout << numbers << "\n";
}

void print_test_vector_in_limit() {
    vector<string> stuff;
    vector_read(cin, stuff, 5);
    cout << stuff << "\n";
    vector<int> numbers;
    vector_read(cin, numbers, 5);
    cout << numbers << "\n";
    vector<char> letters;
    vector_read(cin, letters, 3);
    cout << letters << "\n";
}

void print_test_occurrences_count() {
    cout << smanip::occurrences("OKOKOKOK", "OK") << "\n";
    cout << smanip::count("OKOKOKOK", "OK") << "\n";
    cout << smanip::occurrences("OKHELLOOK", "OK") << "\n";
    cout << smanip::count("OKHELLOOK", "OK") << "\n";
    cout << smanip::occurrences("O", "OK") << "\n";
    cout << smanip::count("O", "OK") << "\n";
    cout << smanip::occurrences("", "OK") << "\n";
    cout << smanip::count("", "OK") << "\n";
    cout << smanip::occurrences("OK", "") << "\n";
    cout << smanip::count("OK", "") << "\n";
    cout << smanip::occurrences("", "") << "\n";
    cout << smanip::count("", "") << "\n";
    cout << smanip::occurrences("OK", 'O') << "\n";
    cout << smanip::count("OK", 'O') << "\n";
}

int main() {
    print_test_occurrences_count();
}