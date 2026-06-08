#include <iostream>
#include <vector>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    vector<int> count(26, 0);

    for (char c : magazine) {
        count[c - 'a']++;
    }

    for (char c : ransomNote) {
        if (--count[c - 'a'] < 0) {
            return false;
        }
    }

    return true;
}

int main() {
    string ransomNote = "aa";
    string magazine = "aab";

    cout << (canConstruct(ransomNote, magazine) ? "true" : "false");
    return 0;
}