#include <bits/stdc++.h>
#include "string_manip.hpp"

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
}