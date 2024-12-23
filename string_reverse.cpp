#include <iostream>
#include <string>
using namespace std;

string reverseString(const string& str) {
    string reversed = str;
    int start = 0, end = str.length() - 1;

    while (start < end) {
        swap(reversed[start], reversed[end]);
        start++;
        end--;
    }
    return reversed;
}

int main() {
    string str = "C++ Programming!";
    cout << "Original: " << str << endl;
    cout << "Reversed: " << reverseString(str) << endl;

    return 0;
}
