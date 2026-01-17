/*
* LC-066 - Plus One
*
*/

#include <iostream>

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size(); i-- > 0 ; ) {
            if (digits[i] != 9) {
                digits[i]++;
                return digits;
            }
            else {
                digits[i] = 0;
            }
        }

        vector<int> newDigits(digits.size() + 1);
        newDigits[0] = 1;
        for (int j = 1; j < newDigits.size(); j++) {
            newDigits[j] = digits[j-1];
        }

        return newDigits;
    }
};
