#include <iostream>
#include <string>

using namespace std;

string removeSpaces(const string& str) {
    string result;
    for (char ch : str) {
        if (ch != ' ' && ch != '\t' && ch != '\n' && ch != '\r' && ch != '\v' && ch != '\f') {
            result += ch;
        }
    }
    return result;
}

int main() {
    string inputString;
    cout << "Enter a string with white spaces: ";
    getline(cin, inputString);

    string stringWithoutSpaces = removeSpaces(inputString);
    cout << "String after removing white spaces: " << stringWithoutSpaces << endl;

    return 0;
}
