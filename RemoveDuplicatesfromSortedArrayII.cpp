#80.Remove Duplicates from Sorted Array II


### S O L U T I O N  #####

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //TC : O(N)
       if (nums.size() <= 2) return nums.size(); // Edge case: if the array has 2 or fewer elements, return its size

        int i = 2; // Start from the 3rd element in the array
        for (int j = 2; j < nums.size(); j++) {
            if (nums[j] != nums[i - 2]) { // Compare with the element two places before
                nums[i] = nums[j]; // Update the current element
                i++;
            }
        }
        return i;
    }
};