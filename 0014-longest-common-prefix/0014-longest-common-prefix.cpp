class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //Vector with flexible size for storing common prefix characters:
        vector<char> commonPrefix;
        int numWords = strs.size();
        
        //Finding minimal length of a word:
        int minChar = strs[0].length();
        for(int i = 0; i < numWords; i++){
            if(minChar >= strs[i].length()) minChar = strs[i].length();
        }
                
        
        //Checking the first minChar characters of each word:
        int outputLength = 0;
        for(int i = 0; i < minChar; i++){
            bool match = true;
            for(int j = 1; j < numWords; j++){
                if(strs[j][i] != strs[j - 1][i]) {
                    match = false;
                    break;
                }
            }
            outputLength++;
            if(match) commonPrefix.push_back(strs[0][i]);
            else {
                commonPrefix.push_back('\0');
                break;
            }
        }

        char output [200];
        for(int i = 0; i < outputLength; i++){
            output[i] = commonPrefix[i];
        }
        
        return output;
    }
};