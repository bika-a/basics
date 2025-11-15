#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long reverse=0;
        int temp=x;

        while(temp!=0){
            int digit=(temp%10);
            temp=temp/10;

            if (reverse > INT_MAX / 10 || (reverse == INT_MAX / 10 && digit > INT_MAX % 10)){
                return false;
            }
            reverse=(reverse*10)+digit;
        }

        
       return (reverse==x);
        
    }
    
};