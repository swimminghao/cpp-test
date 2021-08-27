//
// Created by xh on 2021/8/26.
//

#ifndef FIRST_SOLUTION_H
#define FIRST_SOLUTION_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class solution {
public:
    string palindrome(string &s, int l, int r) {
        while (l >= 0 && r < s.size() && s[l] == s[r]) {
            l--;
            r++;
        }
        const basic_string<char, char_traits<char>, allocator<char>> &basicString
                = s.substr(l + 1, r - l - 1);
        return basicString;
    }

    string longestPalindrome(string s) {
        string res;
        for (int i = 0; i < s.size(); ++i) {
            string s1 = palindrome(s, i, i);
            string s2 = palindrome(s, i, i + 1);
            res = res.size() > s1.size() ? res : s1;
            res = res.size() > s2.size() ? res : s2;
        }
        return res;
    }
};


#endif //FIRST_SOLUTION_H
