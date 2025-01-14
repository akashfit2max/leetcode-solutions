class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin() , arr.end());
        int diff = arr[1] - arr[0];
        for(int i=1;i<arr.size();i++){
            if(diff != arr[i] - arr[i-1]){
                return false;
            }
        }
        return true;
    }
};
