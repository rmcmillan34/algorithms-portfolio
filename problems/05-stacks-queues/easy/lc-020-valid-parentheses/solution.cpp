#include <bits/stdc++.h>

class Solution {
public:
    bool isValid(string s) {
        std::stack<char> brackets;
        std::string::iterator it;

        for (it = s.begin(); it != s.end(); ++it) {
            char c = *it;
            if (*it == '(' || *it == '[' || *it == '{') {
                brackets.push(*it);
            }
            else {
                if ( brackets.empty() ) return false;

                char current = brackets.top();
                brackets.pop();

                if ( current == '{' && c != '}' ) return false;
                if ( current == '[' && c != ']' ) return false;
                if ( current == '(' && c != ')' ) return false;
            }
        }
        return brackets.empty();
    }   
};
