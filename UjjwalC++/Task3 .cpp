#include <iostream>
#include <string>

using namespace std;

int countVowels(const string& str) {
    int vowelCount = 0;
    for (char ch : str) {
        switch (tolower(ch)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vowelCount++;
                break;
            default:
                break;
        }
    }
    return vowelCount;
}

int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);

    int vowels = countVowels(inputString);
    cout << "Number of vowels in the string: " << vowels << endl;

    return 0;
}
