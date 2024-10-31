#include <iostream>
#include <string>

using namespace std;

int countWords(string str) {
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

int main(void) {
    string testStr1 = "Wazzzzzzup brah";
    string testStr2 = "I'm testing to see if dis shat works";
    string testStr3 = "Does it??? lets find out brah";

    cout << "Number of words in '" << testStr1 << "': " << countWords(testStr1) << endl;
    cout << "Number of words in '" << testStr2 << "': " << countWords(testStr2) << endl;
    cout << "Number of words in '" << testStr3 << "': " << countWords(testStr3) << endl;

    return 0;
}
