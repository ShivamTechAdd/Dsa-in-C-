#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
    string input = "zoop smart is hiring";
    vector<string> words;
    string word;

    // String को words में तोड़ना
    stringstream ss(input);
    while (ss >> word) {
        // हर word को reverse करना
        reverse(word.begin(), word.end());
        words.push_back(word);
    }

    // Vector को print करना
    for (const auto& w : words) {
        cout << w << " ";
    }

    return 0;
}
