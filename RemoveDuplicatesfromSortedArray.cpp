#26.Remove Duplicates from Sorted Array

#### S O L U T I O N  #####

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    //TC : O(N)    
        int count=0;  // Initialize a counter to keep track of the position of unique elements
        for(int i=0;i<nums.size();i++){
              // Check if the current element is equal to the next one
            // If true, skip the current element as it's a duplicate
            if(i<nums.size()-1 && nums[i]==nums[i+1])
              continue;
                // If the current element is not a duplicate, place it at the index 'count'
            // Then, increment the counter to move to the next position for a unique element
            else {
                nums[count]=nums[i];
                count++;
            }  

        }
        return count;  // Return the count of unique elements
    }
};