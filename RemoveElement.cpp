#27. Remove Element


#### S O L U T I O N #####

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
//TC : O(N) AND SC : O(1)        
        int count=0; // Initialize count to track the number of elements not equal to 'val'
        for(int i=0;i<nums.size();i++){
            if(val!=nums[i]){ // If the current element is not equal to 'val'
                nums[count]=nums[i];  // Assign the current element to the position indicated by 'count'
                count++;
            }
        }
        return count;   // Return the count of elements that are not equal to 'val'
    }
};