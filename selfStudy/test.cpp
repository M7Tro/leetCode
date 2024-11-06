class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int numberLength = 1;
        for(;  numberLength < x; numberLength *= 10);
        numberLength /= 10;
        
        for(; numberLength > 1; numberLength /= 100){
            cout << x << " " << numberLength << endl;
            if(x / numberLength != x % 10) return false;
            x %= numberLength;
            x /= 10;        
        }
        
        return true;
    }
};