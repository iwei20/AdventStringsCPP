#include <bits/stdc++.h>
#include "advent_utils.hpp"

using namespace std;

int main() {
    cout << smanip::count("Hello", 'c') << "\n";
    cout << smanip::count("Hello", 'h') << "\n";
    cout << smanip::count("Hello", 'o') << "\n";

    cout << smanip::slice("Hello", 1, nullopt, 2) << "\n";
    cout << smanip::slice("Hello", 1, nullopt, nullopt) << "\n";
    cout << smanip::slice("Hello", nullopt, nullopt, nullopt) << "\n";
    cout << smanip::slice("Hello", nullopt, nullopt, -1) << "\n";
    cout << smanip::slice("Hello", -3, nullopt, nullopt) << "\n";
    cout << smanip::slice("Hello", nullopt, -1, nullopt) << "\n";
    cout << smanip::slice("Hello", -3, 0, -1) << "\n";
    cout << smanip::slice("Hello", -3, nullopt, -1) << "\n";
    cout << smanip::slice("Hello", -4, -3, -1) << "\n";
    cout << smanip::slice("Hello", nullopt, -4, -3) << "\n";

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

    vector<int> test5 = {1, 2, 3, 4, 5};
    vector<int> test1 = {1};
    vector<int> test0 = {};
    vector<double> testd = {1.1, 5.4, 329309};

    cout << test5 << "\n";
    cout << test1 << "\n";
    cout << test0 << "\n";
    cout << testd << "\n";

    cout << smanip::hash_rolling("OKOKOKOK") << "\n";
}