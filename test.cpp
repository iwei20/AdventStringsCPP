#include <bits/stdc++.h>
#include "advent_utils.hpp"

using namespace std;

int main() {
    cout << manip::count("Hello", 'c') << "\n";
    cout << manip::count("Hello", 'h') << "\n";
    cout << manip::count("Hello", 'o') << "\n";

    cout << manip::slice("Hello", 1, nullopt, 2) << "\n";
    cout << manip::slice("Hello", 1, nullopt, nullopt) << "\n";
    cout << manip::slice("Hello", nullopt, nullopt, nullopt) << "\n";
    cout << manip::slice("Hello", nullopt, nullopt, -1) << "\n";
    cout << manip::slice("Hello", -3, nullopt, nullopt) << "\n";
    cout << manip::slice("Hello", nullopt, -1, nullopt) << "\n";
    cout << manip::slice("Hello", -3, 0, -1) << "\n";
    cout << manip::slice("Hello", -3, nullopt, -1) << "\n";
    cout << manip::slice("Hello", -4, -3, -1) << "\n";
    cout << manip::slice("Hello", nullopt, -4, -3) << "\n";

    cout << manip::hash_str("OKOKOKOK") << "\n";
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