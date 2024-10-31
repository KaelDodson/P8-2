#include <iostream>
#include <string>

using namespace std;

int countWords(const string& str) {
    int wordCount = 0;
    bool inWord = false;
    for (char character : str) {
        if (character == ' ') {
            inWord = false;
        }
        else {
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        }
    }
    return wordCount;
}

int main() {
    string input;
    while (true) {
        cout << "Enter a string or Q to quit: ";
        input = "";
        char ch;
        while (true) {
            ch = getchar();
            if (ch == '\n') {
                break;
            }
            input = input + ch;
        }
        if (input == "Q" || input == "q") {
            break;
        }
        cout << "Word count: " << countWords(input) << endl;
    }
    return 0;
}
