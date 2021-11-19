class Solution {
public:
    vector<string> combined(vector<string> str, string sub){
        vector<string> temp;
        if(str.size()==0){
            
            for(int i=0;i<sub.size();i++){
                string t;
                t += sub[i];
                temp.push_back(t);
            }
            return temp;
        }
        
        for(int i=0;i<str.size();i++){
            for(int j=0;j<sub.size();j++){
                string t = str[i] + sub[j];
                temp.push_back(t);
            }
        }
        return temp;
    }
    vector<string> letterCombinations(string digits) {
        
        
        map<int,string> num;
        num[2] = "abc"; num[3] = "def"; num[4] = "ghi"; num[5] = "jkl"; num[6] ="mno";
        num[7] = "pqrs"; num[8] = "tuv"; num[9] = "wxyz";
        
        vector<string> dp;
        if(digits.size()==0)
            return dp;
        for(int i=0;i<digits.size();i++){
            int index = digits[i]-'0';
            dp = combined(dp,num[index]);
        }
        
        return dp;
    }
};
