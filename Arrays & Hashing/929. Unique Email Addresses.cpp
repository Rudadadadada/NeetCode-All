#include <iostream>
#include <vector>
#include <unordered_set>

int numUniqueEmails(std::vector<std::string> emails) {
    std::unordered_set<std::string> uniq_emails;
    for (std::string email: emails) {
        std::string correct_email;
        bool at_sign = false;
        bool plus = false;
        for (char symbol : email) {
            if (at_sign) {
                correct_email += symbol;
                continue;
            }
            if (symbol == '@') {
                at_sign = true;
                plus = false;
            }
            if (symbol == '+' && !at_sign)
                plus = true;
            if (symbol != '.' && !plus)
                correct_email += symbol;
        }
        uniq_emails.insert(correct_email);
    }
    return uniq_emails.size();
}