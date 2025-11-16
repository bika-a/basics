#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> val = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int result = 0;

        for (int i = 0; i < s.size(); i++) {
            if (i + 1 < s.size() && val[s[i]] < val[s[i + 1]]) {
                result -= val[s[i]];
            } 
            else {
                result += val[s[i]];
            }
        }

        return result;
    }
};
