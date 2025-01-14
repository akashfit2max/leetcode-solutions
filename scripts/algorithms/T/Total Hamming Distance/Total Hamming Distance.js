var totalHammingDistance = function(nums) {
    let n = nums.length, ans = 0;
    for(let bit = 0; bit < 32; bit++) {
        let zeros = 0, ones = 0;
        for(let i = 0; i < n; i++) {
            ((nums[i] >> bit) & 1) ? ones++ : zeros++;
        }
        ans += zeros * ones;
    }
    return ans;
};
