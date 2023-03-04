#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

bool wordPattern(std::string pattern, std::string s) {
    std::vector<std::string> words;


    std::unordered_map<char, std::string> d;

    std::unordered_set<char> uniq_letters;
    std::unordered_set<std::string> uniq_words;

    for (char letter: pattern) {
        d[letter] = "";
        uniq_letters.insert(letter);
    }

    s += ' ';
    std::string tmp_word;
    for (char symbol: s) {
        if (symbol == ' ') {
            words.push_back(tmp_word);
            uniq_words.insert(tmp_word);
            tmp_word = "";
        } else
            tmp_word += symbol;
    }

    if (pattern.size() != words.size())
        return false;

    if (uniq_letters.size() != uniq_words.size())
        return false;

    for (int i = 0; i < s.size(); ++i) {
        if (d[pattern[i]].empty())
            d[pattern[i]] = words[i];
        else if (d[pattern[i]] != words[i])
            return false;
    }
    return true;
}