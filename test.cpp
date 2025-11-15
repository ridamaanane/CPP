// C++ Program to show, how to use
// string::replace() for replacing the
// multiple characters with single repeated
// character
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "Hey World";

    // Replaces 3 character from 0th index of
    // str with 3 copies of '!'
    str.replace(0, 3, 3, '!');

    cout << str << endl;

    return 0;
}