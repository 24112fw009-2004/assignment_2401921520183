#include <iostream>
#include <unordered_map>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length())
        return false;

    unordered_map<char, int> freq;

    for (char c : s)
        freq[c]++;

    for (char c : t) {
        freq[c]--;
        if (freq[c] < 0)
            return false;
    }

    return true;
}

int main() {
    string s = "anagram";
    string t = "nagaram";

    cout << (isAnagram(s, t) ? "true" : "false") << endl;

    return 0;
}