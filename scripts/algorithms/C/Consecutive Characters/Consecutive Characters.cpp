class Solution {
public:
    int ans = 1 ;
    int maxPower(string s) {
        for(int i = 0 ; i < size(s) ; ++i ){
            int j = i ;
            while(j < size(s) and s[j] == s[i]) ++j ;
            ans = max(ans,j-i);
            i = j - 1 ;
        }
        return ans ;
    }
};
