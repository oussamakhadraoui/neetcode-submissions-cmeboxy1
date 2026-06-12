class Solution {
    /**
     * @param {number[]} nums
     * @return {boolean}
     */
    hasDuplicate(nums) {
        let rec=new Set();
        let n= nums.length;
        for(let i=0;i<n;i++){
            if(rec.has(nums[i]))return true;;
            rec.add(nums[i]);
        }
        return false;
    }
}
