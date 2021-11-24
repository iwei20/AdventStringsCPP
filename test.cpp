#include <bits/stdc++.h>
#include "string_manip.hpp"

using namespace std;

int main() {
    cout << manip::count("Hello", 'c') << "\n";
    cout << manip::count("Hello", 'h') << "\n";
    cout << manip::count("Hello", 'o') << "\n";

    cout << manip::slice("Hello", 1, std::nullopt, 2) << "\n";
}